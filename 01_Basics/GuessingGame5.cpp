#include <iostream>

int main()
{
    bool game_won = false;

    std::cout << "Welcome to my Guessing Game!" << std::endl;

    do
    {
        int number;
        std::cout << "Please enter a number between 0 and 11" << std::endl;
        std::cin >> number;

        if (number > 0 && number <= 10)
        {
            if (number == 3)
            {
                std::cout << "You guessed the number and won!" << std::endl;
                game_won = true;
            }
            else if (number % 2 == 0)
            {
                std::cout << "you won the wooden spoon, please guess again!" << std::endl;
            }
            else
            {
                std::cout << "You guessed wrong, please guess again!" << std::endl;
            }
        }
    } while (game_won != true);

    return 0;
}
