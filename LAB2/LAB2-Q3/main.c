// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // print a simple menu with 3 choices, when select one choice print the choice word and exit.
    char choice = 0;
    printf("Choose an option: ");
    scanf("%c", &choice);
    switch(choice){
        case 'a':
            printf("Burger");
            break;
        case 'b':
            printf("Pizza");
            break;
        case 'c':
            printf("Sandwich");
            break;
        default:
            printf("No order");
    }    
    
    return 0;
}