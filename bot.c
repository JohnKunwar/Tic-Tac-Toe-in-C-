#include "header.h"


int bot_move(struct board_stage *board)
{
    srand(time(NULL));
    int random_num = (rand() % 9) + 1;
    while (check_availabity(random_num, board) == false)
	random_num = (rand() % 9) + 1;
    
    change_bot_stage(random_num, board);

    return random_num;
}
