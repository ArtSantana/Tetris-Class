/*
    Trabalho LAB2,
    Jogo Tetris.
*/
#include "tetris.h"


int main(void)
{
    char matrix[ROWS][COLUMN];
    int posI, posJ;

    posI = ROWS/2;
    posJ = COLUMN/2;

    init(matrix);

    while(1==1)
    {
        CLEAR_SCREEN;
        matrix[posI][posJ] = 64;
        printMatrix(matrix);
        matrix[posI][posJ] = 32;
        while(posJ < COLUMN) posJ++;
    }

    return 0; 
}

