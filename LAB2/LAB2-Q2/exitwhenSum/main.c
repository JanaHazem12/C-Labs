#include <stdio.h>
#include <stdlib.h>

int main()
{
    // receive numbers from a user, and exit when sum > 100

    int sum = 0;
    // int i = 0;
    int number = 0;
    int f;
    //printf("Enter a number: ");

    while (sum <= 100) {
        f=1;
        printf("Enter a number: ");
        while(f){
            if(scanf(" %d", &number)!=1){
                printf("INCORRECT, ENTER A NUMBER: ");
                scanf(" %d", &number);
                fflush(stdin);
            }
            else{
                f=0;
            }
        }
        sum+=number;
        if (sum == 100)
            break;
    }
    if (sum >= 100){
        printf("sum exceeded 100!");
    }
    return 0;
}
