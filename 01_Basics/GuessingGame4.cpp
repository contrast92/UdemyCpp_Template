#include <iostream>

int main()
{
    int number_attempts;

    std::cout << "Welcome to my Guessing Game!" << std::endl;
    std::cout << "Enter the number of attempts: ";
    std::cin >> number_attempts;

    for (int i = 0; i < number_attempts; i++)
    {
        int number;
        std::cout << "Please enter a number" << std::endl;
        std::cin >> number;

        if (number > 0 && number <= 10)
        {
            if (number == 3)
            {
                std::cout << "You guessed the number!" << std::endl;
                break;
            }
            else if (number % 2 == 0)
            {
                std::cout << "you won the wooden spoon!" << std::endl;
            }
            else
            {
                std::cout << "You guessed wrong!" << std::endl;
            }
        }
    }
}
