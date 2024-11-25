#include <stdio.h>
#include <stdlib.h>

void swap1(int *x, int *y){
    *x = *x + *y; // x=8
    *y = abs(*y - *x); // y=3-8=5
    *x = *x - *y; // x=8-5=3
}

void swap2(int *x, int *y){
    *x = abs(*x - *y); // x=3-5=2
    *y = abs(*x - *y); // y=2-5=3
    *x = *x + *y; // x=2+3=5
}

void swap3(int *x, int *y){ // x = 5 , y = 3 XOR
    *x = *x ^ *y; // 5^3=6 (0101^0011=0110)
    *y = *x ^ *y; // 6^3=5 (0110^0011=0101)
    *x = *x ^ *y; // 6^5=3 (0110^0101=0011)
}

void swap4(int *x, int *y){ // x = 5 , y = 3
    *x=(*x)*(*y); // 5*3=15
    *y=*x/(*y); // 15/3=5
    *x=*x/(*y); // 15/5=3
}

int main()
{
    int x=3;
    int y=5;
    printf("x: %d , y: %d\n",x,y);
    swap1(&x, &y);
    swap2(&x, &y);
    swap3(&x, &y);
    swap4(&x, &y);
    printf("x: %d , y: %d",x,y);
    return 0;
}
