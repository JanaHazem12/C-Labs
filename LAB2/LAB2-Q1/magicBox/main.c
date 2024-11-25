#include <stdio.h>
#include <stdlib.h>
#include <Conio.h>
#include <Windows.h>


void gotoxy1(int x, int y){
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main()
{
    int N=0;
    printf("Enter an odd number: ");
    scanf(" %d", &N);
    while(N % 2 == 0){
         printf("Please Enter an odd number: ");
         scanf(" %d\n", &N);
    }
    /*do{
        printf("Please Enter an odd number: ");
        scanf(" %d\n", &N);
    }while(N % 2 == 0);
    */
    int square = N * N;
// constraint: the order of the box(N) must be ODD number

    int i = 0; // row
    int j = N/2; // column
    int a = 0;
    gotoxy1(i+1,j*4);
    printf("%d", 1);
    //printf("**");


    // printf("\033[%d;%dH", (y+2),(x*4+2));
    // int arr[40][40]; // no. of rows = no. of columns XX
    // arr[0][N/2] = 1; // put the no. 1 in the middle of the 1st row
    // arr[i][j] = 1; // put the no. 1 in the middle of the 1st row


    for(a=1; a<square; a++){ // looping over NxN
        if(a % N != 0){ // 2,4,7,8 - decrementing
            if(i==0){
                i=N-1;
            }
            else{
                i=i-1; // decrement row by 1
            }
            if(j==0){
                j=N-1;
            }
            else{
                j=j-1; // decrement column by 1
            }
            // PRINTT
            gotoxy1(i+1,j*4);
            printf("%d", a+1);
            //printf("**");
            //printf("\n");
        }

        else{ // incrementing
            if(i==N-1){
                i=0;
        }
            else{
                i=i+1;
            }
        gotoxy1(i+1,j*4);
        printf("%d", a+1);
        //printf("**");
        //printf("\n");
        }
         // PRINTT
        // printf("%d", a++);

}

    return 0;
}
