#include "Game.h"
#include <iostream>

void game()
{
    std::cout << "Welcome to my Guessing Game!" << std::endl;
    bool game_won = false;

    do
    {
        int number;
        std::cout << "Please enter a number between 0 and 11: ";
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
        else
        {
            std::cout << "You must enter a number between 0 and 10." << std::endl;
        }
    } while (game_won != true);
}
