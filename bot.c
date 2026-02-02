#include "header.h"


int bot_move(struct board_stage *board)
{
    // One layer bot checks the current move result in winning game then plays it. 
    for (int i = 1; i <= 9; i++)
	{
	    if (check_availabity(i , board) == false)
		continue;
	    else
		{
		    // make copy of board
		    struct board_stage board_copy = *board;
		    change_bot_stage(i, &board_copy);

		    if (win_check(&board_copy, i) == true)
			{
			    printf("it works\n");
			    change_bot_stage(i , board);			    
			    return i;			    
			}

		}
	}
    
    srand(time(NULL));
    int random_num = (rand() % 9) + 1;
    while (check_availabity(random_num, board) == false)
	random_num = (rand() % 9) + 1;
    
    change_bot_stage(random_num, board);

    return random_num;
}
