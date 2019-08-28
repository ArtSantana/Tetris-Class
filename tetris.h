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
