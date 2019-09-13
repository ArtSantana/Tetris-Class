#include "tetris.h"

int block = 157;

void init(char matrix[ROWS][COLUMN])
{
    int i,j;

    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            matrix[i][j] = 176;
        }
    }
    
}
void printMatrix(char matrix[ROWS][COLUMN])
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
}

void frame(char matrix[ROWS][COLUMN])
{
    int i,j;

    
    for(i=1; i<ROWS-1; i++)
    {
        matrix[i][0] = 186;
    }
    for(i=1; i<ROWS-1; i++)
    {
        matrix[i][COLUMN-1] = 186;
    }
    for(i=1; i<COLUMN-1; i++)
    {
        matrix[0][i] = 205;
    }
    for(i=1; i<COLUMN-1; i++)
    {
        matrix[ROWS-1][i] = 205;
    }
    
    matrix[0][0] = 201; //TOP LEFT
    matrix[0][COLUMN-1] = 187;//TOP RIGHT
    matrix[ROWS-1][0] = 200;//BOTTOM LEFT
    matrix[ROWS-1][COLUMN-1] = 188;//BOTTOM RIGHT
    
}


void runtime(char matrix[ROWS][COLUMN], int posI, int posJ)
{    
    while(1==1)
    {
        char direction = 'O';
        /*
        if(kbhit())
        {
            direction = getch();
        }
        */
        posJ = moviment(direction, posJ, block);
        gotoxy(0,0);
        matrix[posI][posJ] = block;
        
        printMatrix(matrix);
        printf("%d  %d", posJ, posI);

        matrix[posI][posJ] = 176;
        if(posI < ROWS-2) posI++;
        
    }
} 

int moviment(char direction, int posJ, char block)
{
    if(direction == 'a' | direction == 'A')
    {
        if(posJ-1 != block && posJ > 2)
        {
            return posJ-1;
        }        
    }

    else if(direction == 'd' | direction == 'D')
    {
        if(posJ+1 != block && posJ < COLUMN -2)
        {
            return posJ+1;
        }        
    }    

    return posJ;
}