#ifdef _WIN32
#include <windows.h>    // for win32 API functions
#include <io.h>         // for _get_osfhandle()
#else
#ifndef _POSIX_SOURCE
#define _POSIX_SOURCE   // enable POSIX extensions in standard library headers
#endif
#include <unistd.h>     // for isatty()
#endif

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>


void gotoxy1(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle (STD_OUTPUT_HANDLE), coord) ;
}

// use an enum for platform-independent interface:
typedef enum TextColor
{
    TC_BLACK = 0,
    TC_BLUE = 1,
    TC_GREEN = 2,
    TC_CYAN = 3,
    TC_RED = 4,
    TC_MAGENTA = 5,
    TC_BROWN = 6,
    TC_LIGHTGRAY = 7,
    TC_DARKGRAY = 8,
    TC_LIGHTBLUE = 9,
    TC_LIGHTGREEN = 10,
    TC_LIGHTCYAN = 11,
    TC_LIGHTRED = 12,
    TC_LIGHTMAGENTA = 13,
    TC_YELLOW = 14,
    TC_WHITE = 15
} TextColor;

// set output color on the given stream:
void setTextColor(FILE *stream, TextColor color);

int Arrows(char key, int pos){
    if(key==72){ //arrow up
        if(pos == 1){
            pos = 3;
        }
        else{
            pos-=1;
        }
    }
    else if(key==80){ //arrow down
        if(pos == 3){
            pos=1;
        }
        else{
            pos+=1;
        }
    }
    /*else if(key==75 || key==77){ // left & right keys
            pos=-1; // TESTING right/left keys
    }*/
    return pos;
}


struct BD{
    unsigned char day;
    unsigned char month;
    int year;
};

typedef struct Employee{
    int id;
    char name[20];
    int age;
    struct BD b;
    int salary;
}Employee;


int main(void)
{
        Employee e1;

        /*printf("Enter Employee id= ");
        scanf("%d", &e1.id);
        printf("Enter Employee Name= ");
        scanf("%s", e1.name); // DO NOT USE & because NAME is a set of values NOT a single value like the rest char name[20];
        printf("Enter Employee Salary= ");
        scanf("%d", &e[i].salary);
        printf("Enter Employee day= ");
        scanf("%d", &e[i].b.day);
        printf("Enter Employee month= ");
        scanf("%d", &e[i].b.month);
        printf("Enter Employee year= ");
        scanf("%d", &e[i].b.year);*/

	//Employee e[SIZE] = {0};
	//int size = 0;



    int pos=1;
    int row=10;
    int column=5;
    setTextColor(stdout, TC_BLUE);
    gotoxy1(row,column);
    printf("New");
    setTextColor(stdout, TC_WHITE);
    gotoxy1(row,column+4);
    printf("Display");
    gotoxy1(row, column+8);
    printf("Exit");
    int flag=1;
    while(flag==1){
        char key=0;
        key = getch();

        if(key==-32){ // up, down, left, right
            key = getch();
            //printf("%d\n", key);
            pos = Arrows(key,pos);
            if(pos==1){
                system("cls"); //sys OR system ??
                setTextColor(stdout, TC_BLUE);
                gotoxy1(row,column);
                printf("New");
                setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column+4);
                printf("Display");
                gotoxy1(row, column+8);
                printf("Exit");
            }
            if(pos==2){
                system("cls"); //sys OR system ??
                setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column);
                printf("New");
                setTextColor(stdout, TC_BLUE);
                gotoxy1(row,column+4);
                printf("Display");
                gotoxy1(row, column+8);
                setTextColor(stdout, TC_WHITE);
                printf("Exit");
            }
            if(pos==3){
                system("cls"); //sys OR system ??
                setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column);
                printf("New");
                setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column+4);
                printf("Display");
                gotoxy1(row, column+8);
                setTextColor(stdout, TC_BLUE);
                printf("Exit");
            }
            /*if(pos==-1){ // TESTING right/left keys
                key= getch(); // waiting for another key to be pressed
            }*/

        }

        else if(key==13){ // enter
            switch(pos){
                case 1: system("cls");setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column);
                //printf("New");
                // Employee e1;
                printf("Enter Employee id= ");
                scanf("%d", &e1.id);
                gotoxy1(row,column+2);
                printf("Enter Employee Name= ");
                scanf("%s", e1.name); // DO NOT USE & because NAME is a set of values NOT a single value like the rest char name[20];
                gotoxy1(row,column+4);
                printf("Enter Employee Salary= ");
                scanf("%d", &e1.salary);
                gotoxy1(row,column+6);
                printf("Enter Employee day= ");
                scanf("%d", &e1.b.day);
                gotoxy1(row,column+8);
                printf("Enter Employee month= ");
                scanf("%d", &e1.b.month);
                gotoxy1(row,column+10);
                printf("Enter Employee year= ");
                scanf("%d", &e1.b.year);
                system("cls");
                setTextColor(stdout, TC_BLUE);
                gotoxy1(row,column);
                printf("New");
                setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column+4);
                printf("Display");
                gotoxy1(row, column+8);
                printf("Exit");
                break;
                //}
                //f=0;

                case 2: system("cls");
                setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column);
                // printf("Display");
                // save info from new (loop over user inputs) and display them

                printf("Employee id= %d \n", e1.id);
                gotoxy1(row,column+2);
                printf("Employee Name= %s \n", e1.name);
                gotoxy1(row,column+4);
                printf("Employee Salary= %d \n", e1.salary);
                gotoxy1(row,column+6);
                printf("Employee day= %d \n", e1.b.day);
                gotoxy1(row,column+8);
                printf("Employee month= %d \n", e1.b.month);
                gotoxy1(row,column+10);
                printf("Employee year= %d \n", e1.b.year);
                /*system("cls");
                setTextColor(stdout, TC_BLUE);
                gotoxy1(row,column);
                printf("New");
                setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column+4);
                printf("Display");
                gotoxy1(row, column+8);
                printf("Exit");*/
                break;

                case 3: system("cls");setTextColor(stdout, TC_WHITE);
                gotoxy1(row,column);
                printf("Exit");
                return 0; // QUITTING
                break;
            }

        }
        else if(key==27){ // ESCAPE key
            // printf("%d\n", key);
            system("cls"); //sys OR system ??
            setTextColor(stdout, TC_BLUE);
            gotoxy1(row,column);
            printf("New");
            setTextColor(stdout, TC_WHITE);
            gotoxy1(row,column+4);
            printf("Display");
            gotoxy1(row, column+8);
            setTextColor(stdout, TC_WHITE);
            printf("Exit");
        }
        /*else if(key==75||key==77){

        }*/
    }
    return 0; //
}




#ifdef _WIN32

void setTextColor(FILE *stream, TextColor color)
{
    int outfd = fileno(stream);
    HANDLE out = (HANDLE)_get_osfhandle(outfd);
    DWORD outType = GetFileType(out);
    DWORD mode;
    if (outType == FILE_TYPE_CHAR && GetConsoleMode(out, &mode))
    {
        // we're directly outputting to a win32 console if the file type
        // is FILE_TYPE_CHAR and GetConsoleMode() returns success

        SetConsoleTextAttribute(out, color);
        // the enum constants are defined to the same values
        // SetConsoleTextAttribute() uses, so just pass on.
    }
}

#else

static const char *ansiColorSequences[] =
{
    "\x1B[0;30m",
    "\x1B[0;34m",
    "\x1B[0;32m",
    "\x1B[0;36m",
    "\x1B[0;31m",
    "\x1B[0;35m",
    "\x1B[0;33m",
    "\x1B[0;37m",
    "\x1B[1;30m",
    "\x1B[1;34m",
    "\x1B[1;32m",
    "\x1B[1;36m",
    "\x1B[1;31m",
    "\x1B[1;35m",
    "\x1B[1;33m",
    "\x1B[1;37m"
};

static const char *ansiColorTerms[] =
{
    "xterm",
    "rxvt",
    "vt100",
    "linux",
    "screen",
    0
    // there are probably missing a few others
};

// get current terminal and check whether it's in our list of terminals
// supporting ANSI colors:
static int isAnsiColorTerm(void)
{
    char *term = getenv("TERM");
    for (const char **ansiTerm = &ansiColorTerms[0]; *ansiTerm; ++ansiTerm)
    {
        int match = 1;
        const char *t = term;
        const char *a = *ansiTerm;
        while (*a && *t)
        {
            if (*a++ != *t++)
            {
                match = 0;
                break;
            }
        }
        if (match) return 1;
    }
    return 0;
}

void setTextColor(FILE *stream, TextColor color)
{
    int outfd = fileno(stream);
    if (isatty(outfd) && isAnsiColorTerm())
    {
        // we're directly outputting to a terminal supporting ANSI colors,
        // so send the appropriate sequence:
        fputs(ansiColorSequences[color], stream);
    }
}

#endif
