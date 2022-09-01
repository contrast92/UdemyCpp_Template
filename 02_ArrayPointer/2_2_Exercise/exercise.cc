#include <iostream>

#include "exercise.h"

// Exercise 1
void push_back(int *&input_array, const unsigned int &size, const int &value)
{
    int *p_array = new int[size + 1];

    for (unsigned int i = 0; i < size; i++)
    {
        p_array[i] = input_array[i];
    }

    p_array[size] = value;

    delete[] input_array;

    input_array = p_array;
}

// Exercise 2
void pop_back(int *&input_array, const unsigned int &size)
{
    int *p_array = new int[size - 1];

    for (unsigned int i = 0; i < size - 1; i++)
    {
        p_array[i] = input_array[i];
    }

    delete[] input_array;

    input_array = p_array;
}
