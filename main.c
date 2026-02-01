#include "header.h"

int main(void)
{
    bool game_on = true;

    
    struct board_stage board; // holds the initial structure of board
    init_board_stage(&board); // init the boards

    // main loops of game
    while(game_on)
	{
	    char c[100]; // this is a buffer
	    int num;

	    // draw the board
	    draw_board(&board);

	    // Input
	    printf("Enter your move: ");
	    while(fgets(c, 100, stdin)) // runs until correct input has been written
		{
		    num = atoi(c);
		    if (num >= 1 && num <= 9)
			{
			    break;			    
			}

		    printf("Enter your move(digit from 1-9): ");		    
		}
	    
	    // Update board
	    change_player_stage(num, &board);




	    // Check whether win
	    int v_check = verdict_check(&board, num); // 1 means win, -1 means draw and 0 means nothing happen
	    if (v_check == 1)
		{
		    won_celeberation();
		}
	    if (v_check == -1)
		{
		    printf("draw\n");
		}
	    
	    // call bot
	    bot_move(&board);
	}

    
    return 0;
}


