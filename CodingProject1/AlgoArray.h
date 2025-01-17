#pragma once

#include "DynArray.h"

double sum(const DynamicArray &dynamic_array);
double mean(const DynamicArray &dynamic_array);
double median(const DynamicArray &dynamic_array);
int divide(const DynamicArray &dynamic_array, int start, int *end);
void quick_sort(const DynamicArray &dynamic_array, int start, int end);
