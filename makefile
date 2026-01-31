SRC = main.c board.c
OBJ = main.o board.o
PROG = tic_tac_toe

$(PROG) : $(OBJ)
	gcc $(OBJ) -o $(PROG)


$(OBJ) : $(SRC)

