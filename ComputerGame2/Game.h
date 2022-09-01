#pragma once

#define LEN_X 10
#define START 0
#define GOAL 9

#define LEFT 'a'
#define RIGHT 'd'

void game();
void print_game_state(unsigned int player_pos);
unsigned int execute_movement(unsigned int player_pos, char move);
bool is_finished(unsigned int player_pos);
