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

    while(1==1)
    {
        gotoxy(0,0);
        matrix[posI][posJ] = 158;
        
        printMatrix(matrix);

        matrix[posI][posJ] = 32;
        if(posI < ROWS-2) posI++;
        
    }
    return 0; 
}

