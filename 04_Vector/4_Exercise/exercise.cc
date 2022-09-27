#include <algorithm>
#include <iostream>
#include <vector>

#include "exercise.h"


// Exercise 2
std::vector<double> max_row_values(Matrix &matrix)
{
    auto row_max_vector = std::vector<double>(matrix.size(), 0.0);
    if (!matrix.size() || !matrix[0].size())
        return row_max_vector;

    for (std::size_t i = 0; i != matrix.size(); ++i)
    {
        auto act_row_max = matrix[i][0];

        for (std::size_t j = 1; j != matrix[i].size(); ++j)
        {
            if (matrix[i][j] > act_row_max)
            {
                act_row_max = matrix[i][j];
            }
        }

        row_max_vector[i] = act_row_max;
    }
}

bool sort_ascending(const int i, const int j)
{
    return i < j;
}

bool sort_descending(const int i, const int j)
{
    return i > j;
}


// Exercise 3
double sort_and_max(std::vector<double> &vec)
{
    std::sort(vec.begin(), vec.end(), sort_ascending);

    return vec.back();

    // auto max_val{0.0};

    // for (auto &val : vec)
    // {
    //     if (val > max_val)
    //     {
    //         max_val = val;
    //     }
    // }

    // return max_val;
}
