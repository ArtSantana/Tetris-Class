/*
    Trabalho LAB2,
    Jogo Tetris.
*/
#include <stdio.h>
#define COLUMN 60
#define ROWS 30
#ifdef _WIN32
# define CLEAR_SCREEN system ("cls")
#else
# define CLEAR_SCREEN puts("\x1b[H\x1b[2J")
#endif

void init(char matrix[ROWS][COLUMN]);
void printMatrix(char matrix[ROWS][COLUMN]);

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

void init(char matrix[ROWS][COLUMN])
{
    int i,j;
    for(i=0; i<ROWS; i++)
    {
        for(j=0; j<COLUMN; j++)
        {
            matrix[i][j] = 32;
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

// -u origin master