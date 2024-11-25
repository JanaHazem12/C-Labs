#include <stdio.h>
#include <stdlib.h>

// If you have a matrix of dimension 3x4. Write a program to read it from the user
// and find the sum of each row and the average of each column.

// VALIDATION --> NO CHAR, STR, ALPHA-NUMERIC, NEGATIVE VALUES

// (0,0) (0,1) (0,2) (0,3)
// (1,0) (1,1) (1,2) (2,3)
// (2,0) (2,1) (2,2) (2,3) --> 12 values

int main()
{
    int arr2[3][4]; // 12 elements
    int i=0; // rows
    int j=0; // column
    int sum0;
    int sum1=0;
    int sum2=0;
    int avg0=0;
    int avg1=0;
    int avg2=0;
    int avg3=0;
    int sumcol0=0;
    int sumcol1=0;
    int sumcol2=0;
    int sumcol3=0;
    int row=3;
    int col=4;
    int f;

    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            //int f=1;
            //printf("Please Enter an index for [%d][%d]\n",i,j);
            //scanf("%d",&arr2[i][j]);
            f=1;
            while(f){
                printf("Please Enter a valid index for [%d][%d]\n",i,j);
                if(scanf("%d",&arr2[i][j])!=1){
                    printf("INCORRECT VALUE!!\n");
                    fflush(stdin);
                    //scanf("%d",&arr2[i][j]);
                }
                else{
                    f=0;
                }
            }
            if(i==0){
                //f=0;
                sum0+=arr2[i][j];
                //printf("sum of row[%d]: [%d]\n", i,sum0);
            }
            //printf("sum of row[%d]: [%d]\n", i,sum0);
            if(i==1){
                //f=0;
                sum1+=arr2[i][j];
                //printf("sum of row[%d]: [%d]\n", i,sum1);
            }
            if(i==2){
                //f=0;
                sum2+=arr2[i][j];
                //printf("sum of row[%d]: [%d]\n", i,sum2);
            }
            if(j==0){
                //printf("%d", j);
                //printf("%d\n", sizeof(arr2));
                sumcol0+=arr2[i][j];
                avg0 = sumcol0/row;
            }
            if(j==1){
                sumcol1+=arr2[i][j];
                avg1 = sumcol1/row;
            }
            if(j==2){
                sumcol2+=arr2[i][j];
                //printf("sumcol222: %d\n", sumcol2);
                avg2 = sumcol2/row;
            }
            if(j==3){
                sumcol3+=arr2[i][j];
                //printf("sumcol33333: %d\n", sumcol3);
                avg3 = sumcol3/row;
            }

            //printf("sum of row[%d]: [%d]\n", i,sum0);
            /*printf("sum of row[%d]: [%d]\n", i,sum0);
            printf("sum of row[%d]: [%d]\n", i,sum1);
            printf("sum of row[%d]: [%d]\n", i,sum2);*/
        }
    }
        for(int r=0; r<3; r++){
                if(r==0){
                printf("sum of row %d: [%d]\n", r,sum0);
                }
                if(r==1){
                printf("sum of row %d: [%d]\n", r,sum1);
                }
                if(r==2){
                printf("sum of row %d: [%d]\n", r,sum2);
                }
        }

        for(int c=0; c<4; c++){
                if(c==0){
                //printf("sum0: %d\n", sumcol0);
                printf("avg of column %d: [%d]\n", c,avg0);
                }
                if(c==1){
                //printf("sum1: %d\n", sumcol1);
                printf("avg of column %d: [%d]\n", c,avg1);
                }
                if(c==2){
                //printf("sum2: %d\n", sumcol2);
                printf("avg of column %d: [%d]\n", c,avg2);
                }
                if(c==3){
                //printf("sum3: %d\n", sumcol3);
                printf("avg of column %d: [%d]\n", c,avg3);
                }
        }
    return 0;
}
