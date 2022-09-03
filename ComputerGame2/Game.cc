#include <iostream>

#include "Game.h"


void print_game_state(unsigned int player_pos)
{
    for (unsigned int i = START; i < LEN_X; ++i)
    {
        if (i == player_pos)
        {
            std::cout << 'P';
        }
        else if (i == GOAL | i == START)
        {
            std::cout << '|';
        }
        else
        {
            std::cout << '.';
        }
    }
}

unsigned int execute_movement(unsigned int player_pos, char move)
{

    if (LEFT == move && player_pos > 0)
    {
        return player_pos - 1;
    }
    else if (RIGHT == move && player_pos < GOAL)
    {
        return player_pos + 1;
    }
    else
    {
        return player_pos;
    }
}

bool is_finished(unsigned int player_pos)
{
    return player_pos == GOAL;
}

void game()
{
    unsigned int player_pos = 0;
    char move = 0;

    while (true)
    {
        if (is_finished(player_pos))
        {
            break;
        }
        print_game_state(player_pos);
        std::cin >> move;
        player_pos = execute_movement(player_pos, move);
    }
};
