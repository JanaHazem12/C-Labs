#include <stdio.h>
#include <stdlib.h>
#define SIZE 9

// PRINT 1D ARRAY USING 2 LOOPS
// NO negative values & NO string, char, alpha-numeric

int main()
{
    int array[SIZE];
    // int N = 3;
    // int square = N*N;
    int i = 0; // rows
    int j = 0; // columns
    int row = 0;
    int f;

    for (i = 0; i < SIZE; i++) {
        printf("Enter array value: ");
        //scanf("%d", &array[i]);
        f=1;
        while(f){
        if(scanf("%d", &array[i])!=1){ //validationnn
            printf("Please enter a positive value: ");
            scanf("%d", &array[i]);
            fflush(stdin);
        }
        else{
            f=0;
        }
    }


    }
    printf("Enter rows: ");
    scanf("%d", &row);


    while(SIZE%row!=0){
        printf("number of rows should be EQUAL to number of columns, Enter a valid number: ");
        scanf(" %d", &row);
    }

    int col = SIZE/row;
    printf("Enter columns: %d\n ", col);


    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d\n", array[i * col + j]);
        }
        printf("\n");
    }

    return 0;
}
