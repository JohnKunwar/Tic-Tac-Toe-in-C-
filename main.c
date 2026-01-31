#include "header.h"

int main(void)
{
    struct board_stage board;
    
    init_board_stage(&board);
    draw_board(&board);
    
    return 0;
}


