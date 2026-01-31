#include <stdio.h>




// structure to hold the stage of the value in each block of game. stage could be X,O or -
struct board_stage
{
    char row1_1, row1_2, row1_3;
    char row2_1, row2_2, row2_3;
    char row3_1, row3_2, row3_3;
};

// functions
void init_board_stage(struct board_stage *); // initalize the board
void draw_board(struct board_stage *); // draws the board
