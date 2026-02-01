#include "header.h"

int main(void)
{
    bool game_on = true;


    intro();
    // main loops of game
    while(game_on)
	{
	    struct board_stage board; // holds the initial structure of board
	    init_board_stage(&board); // init the boards
	    
	    // draw the board
	    draw_board(&board);

	    while(true) // a game instance
		{
		    char c[100]; // this is a buffer
		    int num;

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
		    draw_board(&board);
		    
		    // Check whether win
		    int v_check = verdict_check(&board, num); // 1 means win, -1 means draw and 0 means nothing happen
		    if (v_check == 1)
			{
			    won_celeberation();
			    break;
			}
		    else if (v_check == -1)
			{
			    draw_celeberation();
			    break;
			}
		    // call bot
		    num = bot_move(&board);
		    sleep(1);
		    draw_board(&board);
		    // Check whether win
		     v_check = verdict_check(&board, num); // 1 means win, -1 means draw and 0 means nothing happen
		    if (v_check == 1)
			{
			    loss_celeberation();
			    break;
			}
		    else if (v_check == -1)
			{
			    draw_celeberation();
			    break;
			}		    
		}
	}
    
    return 0;
}


