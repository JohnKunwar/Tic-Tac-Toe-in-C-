#include "header.h"

char player_or_bot = 'X';
// set all the value in board to 0
void init_board_stage(struct board_stage *board)
{
    int count = 0;
    for (int i = 0; i < 3; i++)
	{
	    for (int j = 0; j < 3; j++)
		{
		    board->arr[i][j] = 0;
		    board->map[count].i = i;
		    board->map[count].j = j;
		    count++;
		}

	}
    
    board->row1_1= ' '; board->row1_2= ' '; board->row1_3= ' ';
    board->row2_1= ' '; board->row2_2= ' '; board->row2_3= ' ';
    board->row3_1= ' '; board->row3_2= ' '; board->row3_3= ' ';    
}

void change_stage(int num, struct board_stage *board)
{
    switch(num)
	{
	case 1:
	    board->row1_1 = player_or_bot;
	    board->arr[0][0] = 1;
	    break;
	case 2:
	    board->row1_2 = player_or_bot;
	    board->arr[0][1] = 1;
	    break;
	case 3:
	    board->row1_3 = player_or_bot;
	    board->arr[0][2] = 1;
	    break;
	case 4:
	    board->row2_1 = player_or_bot;
	    board->arr[1][0] = 1;	    
	    break;
	case 5:
	    board->row2_2 = player_or_bot;
	    board->arr[1][1] = 1;
	    break;
	case 6:
	    board->row2_3 = player_or_bot;
	    board->arr[1][2] = 1;
	    break;
	case 7:
	    board->row3_1  = player_or_bot;
	    board->arr[2][0] = 1;
	    break;
	case 8:
	    board->row3_2 = player_or_bot;
	    board->arr[2][1] = 1;	    
	    break;
	case 9:
	    board->row3_3 = player_or_bot;
	    board->arr[2][2] = 1;
	    break;

	default:
	    break;
	}
}

void change_player_stage(int num, struct board_stage *board)
{
    player_or_bot = 'X';
    change_stage(num, board);
}

void change_bot_stage(int num, struct board_stage *board)
{
    player_or_bot = 'O';
    change_stage(num, board);
}
// draws the current stage of board should have run init_board stage command at first
void draw_board(struct board_stage *board)
{
    // First row
    printf("\n\t\t\t\t\t %c ┃ %c ┃ %c \n", board->row1_1, board->row1_2, board->row1_3);
    printf("\t\t\t\t\t━━━━━━━━━━━\n");

    // Second row
    printf("\t\t\t\t\t %c ┃ %c ┃ %c \n", board->row2_1, board->row2_2, board->row2_3);
    printf("\t\t\t\t\t━━━━━━━━━━━\n");    
    // Third row
    printf("\t\t\t\t\t %c ┃ %c ┃ %c \n", board->row3_1, board->row3_2, board->row3_3);

}
