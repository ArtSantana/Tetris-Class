/*
    Trabalho LAB2,
    Jogo Tetris.
*/
#include "tetris.h"


int main(void)
{
    char matrix[ROWS][COLUMN];
    int posI, posJ;

    //Initial position
    posI = 1;
    posJ = COLUMN/2;

    //Initialization of matrix
    init(matrix);
    frame(matrix);
    
    ShowConsoleCursor(0);
    CLEAR_SCREEN;

    runtime(matrix, posI, posJ);
    
    return 0; 
}

