#include <stdio.h>
#include <stdlib.h>

// MENU
// - copy/paste the setColor function AND put it after MAIN ??
// - copy/paste gotoxy1 //
// - 1ST menu, 2ND arrows, 3RD choices, ESC option
// 72 = up, 27 = ESC,
// sys("cls") --> clears terminal

void gotoxy1(int x, int y){
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// MENU



int main()
{
    int flag=1;
    int row=4;
    int column=8;
    gotoxy1();
    printsf("New");
    gotoxy1();
    printsf("Display");
    gotoxy1();
    printsf("Exit");



    return 0;
}
