#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 9


// Write a program to find the maximum and minimum values of a set of numbers using a single dimension array
// VALIDATION ON CHAR, ALPHANUMERIC, STR


int main()
{
    int arr[SIZE]; // USER-INPUT ARRAY
    int i=0;
    int v;
    int temp = 0;
    int maximum_Value = 0; // max = 1
    int minimum_Value = 999999999;
    int b;
    int f;
    char ch;


    for(i=0; i<SIZE; i++){
        //printf("Enter array value: ");
        //scanf(" %d", &arr[i]);

        //printf("Enter array value: \n");
        f=1;
        while(f){
            printf("Enter array value: ");      //3d    %d %c = char t = '3f'
            if (!(scanf(" %d %c", &arr[i], &ch)== 2 && ch=='\n')){
                printf("INCORRECT VALUE!!\n");
                fflush(stdin);
            }
            else{
                f=0;
            }

        }

        //b = isdigit(arr[i]);
        //printf(b);
        /*while(isdigit(arr[i])==0){
            //printf("ERRORRRR");
            printf("Enter array value: ");
            scanf(" %d", &arr[i]);
        }*/
        if(arr[i]>maximum_Value){
            temp = arr[i];
            maximum_Value = temp;
            //printf("arr[i]: ");
        }
        if(arr[i]<minimum_Value){
            temp = arr[i];
            minimum_Value = temp;
        }
    }
    //printf("arr[i]: %d", arr[i]);
    printf("minimum value: %d , maximum value: %d", minimum_Value, maximum_Value);
    return 0;
}
