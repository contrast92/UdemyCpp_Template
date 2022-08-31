#include <iostream>

int main()
{
    int sum = 10;

    do
    {
        std::cout << "sum is at: " << sum << std::endl;
        int input;

        std::cout << "\nPlease enter a number: ";
        std::cin >> input;

        sum += input;
    } while (sum < 10);

    return 0;
}
