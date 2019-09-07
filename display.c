#include "display.h"

void gotoxy(int x, int y)
{
    COORD coord = {0, 0};
    coord.X = x; coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ShowConsoleCursor(int ShowFlag)
{
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = ShowFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}
