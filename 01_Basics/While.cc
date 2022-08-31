// iostream
#include <iostream>

int main()
{
    int sum = 0;

    while (sum < 10)
    {
        std::cout << "sum is at: " << sum << std::endl;
        int input;

        std::cout << "\nPlease enter a number: ";
        std::cin >> input;

        sum += input;
    }


    return 0;
}
