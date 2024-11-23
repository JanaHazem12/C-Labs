// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // print the multiplication table in *ascending* order from table1 to table10 sequentially
    // and separated by a group of "*s"
    // print tables 1,2,3,4,5,6,7,8,9,10 with *s bt. each table
    // in DESCENDING ORDER
    int i=10;
    int j =10;
    int product = 0;
    // loop over 10 mult. tables i*1, i*2, i*3, i*4 .... i = 1,2,3,4,5,6,7,8,9,10
    // nested loop over the other numbers i*j, i*j, i*, i*j .... j = 1,2,3,4,5,6,7,8,9,10
    for(i=10; i>=1; i--){
        printf("table %d\n",i);
        for(j=1; j<=10; j++){
            product = i * j;
            printf("%dx%d\n", i,j);
            printf("%d\n", product);
            if(j==10){
                printf("***********************************\n");
            }
        }
        // product*=i;
    }
    // printf("%d", product);
    
    return 0;
}