#include <iostream>

#include "exercise.h"

void mod_cross_sum(int I, int J)
{
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            int sum = i + j;
            std::string is_even;

            is_even = (sum % 2 == 0) ? "is even" : "is odd";

            if (sum % 2 == 0)
                std::cout << "i: " << i << " +"
                          << " j: " << j << " = " << sum << " := " << is_even << std::endl;
            else
                std::cout << "i: " << i << " +"
                          << " j: " << j << " = " << sum << " := " << is_even << std::endl;
        }
    }
}
