#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define SIZE 20
#define TERMINATOR '\0'
#define EXTENDED_KEY -32
#define LEFT_ARROW 75 // -3275
#define RIGHT_ARROW 77 // -3277
#define DELETE 8 // delete things on the right
#define BACKSPACE 92 // \ (BACKSLASH)
#define HOME 47 // / (SLASH)
#define END 46 // . (dot) - DONEEE
#define INSERT 44 // , (comma) - NOT DONE YET
#define ESCAPE 27


void gotoxy1(int x, int y){
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Head & Tail
// every character that's entered is typed normally
// If it's an extended key, then I check is it DELETE or SPACE or ESCAPE ?
// DELETE --> deletes characters after cursor
// SPACE -->  deletes characters before cursor
// ESCAPE --> moves cursor to be horizontal
// JANAHAZEM - size  = 9 // count the number of times the cursor moves + count the characters inserted


int main()
{
    char string[SIZE]={0};
    int flag=1;
    int f2=1;
    int position=0;
    char option;
    char ch;


    printf("Enter text:\n");
    int counter = 0;
    int f=0;
    int fBS=1;
    while (flag) {
        char key = getch(); // USER-INPUT abcdefgh
        //char key2 = getch();
        if(key == EXTENDED_KEY){ // EXTENDED KEY
            key = getch();
            //int i=0;
            //while(1){
            if(key == LEFT_ARROW){ // LEFT ARROW
                if(position>0){
                    position-=1;
                    system("cls");
                    printf("%s", string);
                    gotoxy1(0,position);
                }
            }
            else if(key == RIGHT_ARROW){ // LEFT ARROW
                if(position<counter){
                    //printf("RIGHT");
                    position+=1;
                    system("cls");
                    printf("%s",string);
                    gotoxy1(0,position);
                }
            }
        }
        else if(key == HOME){ // /
            if(position>0){
                system("cls");
                printf("%s",string);
                gotoxy1(0,0);
                position=0;
                }
            }

         else if(key == END){ // .
            if(position>=0){
                system("cls");
                printf("%s",string);
                gotoxy1(0,counter);
                position=counter;
            }
        }
        else if(key == DELETE){ // abc|def cursor=3 d
            //printf("before: %d", position);
            if(position<counter){
                for(int i=position+1;string[i]!=TERMINATOR;i++){
                    //printf("HENA");
                    string[i]=string[i+1]; // abc|def // cursor at d
                                            // abc|def // cursor at d, i at e - i+1
                }
            counter-=1; // correct
            system("cls");
            printf("%s",string);
            gotoxy1(0,position);
                }
                //printf("after: %d", position);
        }
        else if(key == BACKSPACE){ // abc|def cursor=3 d
            //printf("before: %d", position);c
            if(position<counter){
                for(int i=position-1;string[i]!=TERMINATOR;i++){
                    //printf("HENA");
                    string[i]=string[i+1]; // abc|def // cursor at d
                                            // abc|def // cursor at d, i at e - i+1
                }
            position-=1;
            counter-=1; // same as del
            system("cls");
            printf("%s",string);
            gotoxy1(0,position);
                }
                //printf("after: %d", position);
        }
        else if(key == INSERT){ // ,
            f=!f; // f=1 - to check whether I'm in the INSERT MODE or not
                //while(f=1){ // to remove the comma
                    /*char k = getch();
                    string[position]=k;
                    system("cls");
                    printf("%s", string);
                    gotoxy1(0,position);*/
        }
        else{
            //printf("BEFORE %d\n", position);
             if(f==1) { // INSERT MODE ACTIVATED
                string[position]=key;
                system("cls");
                printf("%s", string);
                gotoxy1(0, position);
        }
            else { // INSERT MODE DEACTIVATED
            if(string[position]!=TERMINATOR&&counter<SIZE){ // abcde
                //else{
                    int i=counter;
                    while(i>=position){
                        string[i+1]=string[i];
                        i-=1;
                    } // shifting from the end to the right
                    string[position]=key;
                    counter+=1;
                    string[counter]=TERMINATOR;
                    system("cls");
                    printf("%s", string);
                    position+=1;
                    gotoxy1(0,position);
                    //counter+=1;
                    //printf("AFTER %d", position);
            }
            else{
            if(counter<SIZE){
                string[position]=key;
                string[position+1]=TERMINATOR;
                system("cls");
                printf("%s", string);
                position+=1;
                counter+=1;
                        }
                    }
                }
            }
        }
    return 0;
}
