#include <algorithm>
#include <cmath>
#include <cstdlib>

#include "AlgoArray.h"
#include "DynArray.h"


double sum(const DynamicArray &dynamic_array)
{
    double sum_value = 0.0;

    for (std::size_t i = 0; i < dynamic_array.m_length; ++i)
    {
        sum_value += dynamic_array.m_data[i];
    }

    return sum_value;
};

double mean(const DynamicArray &dynamic_array)
{
    return sum(dynamic_array) / static_cast<double>(dynamic_array.m_length);
};

double median(const DynamicArray &dynamic_array)
{
    double median_value = 0.0;
    const bool has_even_length = dynamic_array.m_length % 2 == 0;

    if (has_even_length)
    {
        const std::size_t index1 = dynamic_array.m_length / 2;
        const std::size_t index2 = (dynamic_array.m_length / 2) - 1;
        return (dynamic_array.m_data[index1] + dynamic_array.m_data[index2]) / 2.0;
    }
    const std::size_t index = dynamic_array.m_length / 2;
    return dynamic_array.m_data[index];
};


// function divides the Array in half.
int divide(const DynamicArray &dynamic_array, int start, int *end)
{
    int pivot = dynamic_array.m_length[end];
    int index = start;

    for (int i = start; i < dynamic_array.m_length[end]; ++i)
    {
        if (dynamic_array.m_length[&i] < pivot)
        {
            int temp = dynamic_array.m_length[&i];
            dynamic_array.m_length[&i] = dynamic_array.m_length[&index];
            dynamic_array.m_length[&index] = temp;
            ++index;
        }
    }
    int temp = dynamic_array.m_length[end];
    dynamic_array.m_length[end] = dynamic_array.m_length[&index];
    dynamic_array.m_length[&index] = temp;

    return index;
}

void quick_sort(const DynamicArray &dynamic_array, int start, int end)
{
    if (start < end)
    {
        int divider = divide(dynamic_array, start, &end);
        quick_sort(dynamic_array, start, end);
        quick_sort(dynamic_array, (divider + 1), end);
    }
}
