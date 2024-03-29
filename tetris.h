#include <stdio.h>
#include <conio.h>
#include <time.h>
#define COLUMN 20
#define ROWS 25
#ifdef _WIN32
# define CLEAR_SCREEN system ("cls")
#else
# define CLEAR_SCREEN puts("\x1b[H\x1b[2J")
#endif


// Initialize the matrix
void init(char matrix[ROWS][COLUMN]);
// print the matrix on the screen
void printMatrix(char matrix[ROWS][COLUMN]);
// create the frame
void frame(char matrix[ROWS][COLUMN]);
// make the matrix runs
void runtime(char matrix[ROWS][COLUMN], int posI, int posJ);
// moviments
int moviment(char direction, int posJ, char block);
// setting the block speed
int BlockSpeed(int posI, char direction);
// reset the rows when became full of blocks
void FilledRow(char matrix[ROWS][COLUMN]);
