#include <iostream>

int main()
{
    unsigned int array_size = 10;

    int *p = new int[array_size];

    for (unsigned int i = 0; i < array_size; i++)
    {
        p[i] = i;
    }

    for (unsigned int i = 0; i < array_size; ++i)
    {
        std::cout << p[i] << std::endl;
    }

    // Heap de-allocation for pointer array
    // [] is important to release all indexes, otherwise only the first
    delete[] p;

    return 0;
}
