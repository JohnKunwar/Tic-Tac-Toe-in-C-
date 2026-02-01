#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

// Escape sequence
/*
#define RED "\033[31m"
#define RESET_COLOR "\033[0m"
#define GREEN "\033[34m"
*/

struct map_array_num{
    int i, j;
};
// structure to hold the stage of the value in each block of game. stage could be X,O or -
struct board_stage
{
    int arr[3][3];
    struct map_array_num map[9];
    
    char row1_1, row1_2, row1_3;
    char row2_1, row2_2, row2_3;
    char row3_1, row3_2, row3_3;
};

// functions
void init_board_stage(struct board_stage *); // initalize the board
void draw_board(struct board_stage *); // draws the board
void change_player_stage(int , struct board_stage *);
void change_bot_stage(int , struct board_stage *);
int verdict_check(struct board_stage *board, int num);
void won_celeberation();
int bot_move(struct board_stage *board);

bool check_availabity(int num, struct board_stage *board);
void intro();
void draw_celeberation();
void loss_celeberation();
