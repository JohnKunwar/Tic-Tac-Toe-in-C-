#include "header.h"


// set all the value in board to 0
void init_board_stage(struct board_stage *board)
{
    board->row1_1= ' '; board->row1_2= ' '; board->row1_3= ' ';
    board->row2_1= ' '; board->row2_2= ' '; board->row2_3= ' ';
    board->row3_1= ' '; board->row3_2= ' '; board->row3_3= ' ';    
}


// draws the current stage of board should have run init_board stage command at first
void draw_board(struct board_stage *board)
{
    // First row
    printf("\t\t\t\t %c ┃ %c ┃ %c \n", board->row1_1, board->row1_2, board->row1_3);
    printf("\t\t\t\t━━━━━━━━━━━\n");

    // Second row
    printf("\t\t\t\t %c ┃ %c ┃ %c \n", board->row2_1, board->row2_2, board->row2_3);
    printf("\t\t\t\t━━━━━━━━━━━\n");    
    // Third row
    printf("\t\t\t\t %c ┃ %c ┃ %c \n", board->row3_1, board->row3_2, board->row3_3);
}
