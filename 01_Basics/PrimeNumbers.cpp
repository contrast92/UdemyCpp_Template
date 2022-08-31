#include <iostream>


// 1.) User-Input: unsigned integer number
// 2.) Compute if the number is a prime number
// 3.) print the result
int main()
{
    bool is_prime = true;

    unsigned int number = 0;
    std::cout << "please insert a positive number: ";
    std::cin >> number;

    if (number == 0 && number == 1)
    {
        is_prime = false;
    }
    else
    {
        for (unsigned int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                is_prime = false;
            }
        }
    }

    std::cout << "The number " << number << " is " << (is_prime ? "prime" : "not prime") << std::endl;


    return 0;
}
