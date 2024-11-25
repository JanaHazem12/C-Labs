#include <stdio.h>
#include <stdlib.h>

// Write a recursive function to compute the power operation: X^Y
// example 2^3 = 2 x 2 x 2 = 8 - 2^4 = 2 x 2 x 2 x 2 = 16 --> Y is the repeated  number --> X * no. of Ys
// VALIDATION --> NO CHAR, STR, ALPHA-NUMERIC - DONEEEEE

int powerOperation(int x, int y){
    if(x==0){
       return 0;
    }
    if(y == 0){
        return 1;
    }
    else{
        return x * powerOperation(x,y-1);
    }
    return 0;
}

int main(){
    int operation;
    int x;
    int y;
    int f;
        /*if(fflush(stdin)!=1){
            printf("please enter a value for X: ");
            scanf(" %d", &x);
            f=0;
        }
        printf("please enter a value for Y: ");
        scanf(" %d", &y);
        if(fflush(stdin)!=1){
            printf("please enter a value for Y: ");
            scanf(" %d", &y);
            f=0;
        }*/


        /*while(fflush(stdin)!=1){
            printf("please enter a correct value for X: ");
            scanf(" %d", &x);
            printf("please enter a correct value for Y: ");
            scanf(" %d", &y);
        }*/

         f=1;
            while(f){
                printf("please enter a correct value for X: ");
                printf("please enter a correct value for Y: ");
                if(scanf(" %d", &x)!=1 || scanf(" %d", &y)!=1){
                    printf("INCORRECT VALUE!!\n");
                    fflush(stdin);
                }
                else{
                    f=0;
                }

    }
    operation = powerOperation(x,y);
    printf("Power Operation= %d", operation);
    return 0;
}
