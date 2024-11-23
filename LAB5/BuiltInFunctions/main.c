#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
#define TERMINATOR '\0'
#define DEST_SIZE 60
#include <string.h>

int main()
{
    // LENGTH
    char str[SIZE];
    int c = strLength_jana(str);
    //printf("Length of str: %d", c);


    // COPY
    char source[SIZE];
    char dest[DEST_SIZE];
    //int size = 0;
    //printf("Old Dest_Size = %s\n", dest);
    //strCopy_jana(source, dest, DEST_SIZE);
    //printf("New Dest_Size = %s\n", dest);


    // LOWER TO UPPER
    char strLU[SIZE];
    //lowerToUpper_jana(strLU);


    // UPPER TO LOWER
    char strUL[SIZE];
    //upperTolower_jana(strUL);


    // CONCATENATION
    //strConcat_jana(dest, source); // DO NOT USE USER-INPUT VALUES

    // COMPARISON
     printf("%d", strcmp(dest, source));
     printf("%d", strComp_jana(dest, source));


    return 0;

}

// LENGTHHHHHHHH
int strLength_jana(char str[]){
    //printf("Please enter a string: ");
    //scanf(" %[^\n]s", str); // CHECK SPACESSSSS
    unsigned int i=0; // HAS TO BE UNSIGNEDD !!
    while(str[i]!=TERMINATOR){
        i++;
    }
    return i;
}

// COPYYYYYYYY
void strCopy_jana(char source[], char dest[], int size){
    // takes size of destination & checks if source's length < destination
    // --> destination size > source size CHECKED so copy
    printf("Please enter a source: ");
    scanf(" %[^\n]s", source);
    printf("Please enter a destination: ");
    scanf(" %[^\n]s", dest);

    int i=0;
    if(strLength_jana(source) <= size-1){
        while(source[i]!=TERMINATOR){
            dest[i] = source[i];
            i++;
        }
         dest[i]=TERMINATOR; // adding a terminator at the end
    }
        else{
            printf("Source is > Destination !!");
        }
    return 0;
}

// LOWER TO UPPER
void lowerToUpper_jana(char strLU[]){
    //char strLU[SIZE];
    int i=0;
    printf("Please enter a string: ");
    scanf(" %[^\n]s", strLU);
    for(i=0; i<SIZE; i++){
        if(strLU[i]>=97 && strLU[i]<=122){ // if letter is between a small to z small CAPITALIZE IT
            strLU[i] = strLU[i] - 32;
        }
    }
    printf("%s", strLU);
    return 0;

}

// UPPER TO LOWER
void upperTolower_jana(char strUL[]){
    int i=0;
    printf("Please enter a string: ");
    scanf(" %[^\n]s", strUL);
    for(i=0; i<SIZE; i++){
        if(strUL[i]>=65 && strUL[i]<=90){ // if letter is between a capital to z capital make it LOWERCASE
            strUL[i] = strUL[i] + 32;
        }
    }
    printf("%s", strUL);
    return 0;

}

// CONCATTTTTTTT
void strConcat_jana(char dest[], char source[]){
      int i=0;
	  int j=0;
	  /*printf("Please enter string1: ");
      scanf(" %s", dest);
      printf("Please enter string2: ");
      scanf(" %s", source);*/
	  while(dest[i] != TERMINATOR){ // if dest[i] != terminator THEN continue
		  i++;
	} // outputs 4 (as “mina” has 4 letters)
	 while(source[j] != TERMINATOR){
		 dest[i] += source[j]; // dest[5] = source[1]
		 j++;
		 i++;
	}
		//dest[i]= TERMINATOR;
		printf("Concatenation: %s", dest);
        return 0;
}

// COMAPREEEEEEEE
int strComp_jana(char dest[], char source[]){ // DEST SIZE HAS TO BE BIGGER THAN SOURCE SIZE
        int i=0;
        int j=0;
        int f=1;
        printf("Please enter string1: ");
        scanf(" %[^\n]s", dest);
        printf("Please enter string2: ");
        scanf(" %[^\n]s", source);
        while(f){
            if(dest[i] == TERMINATOR && source[j] == TERMINATOR){
                f=0;
            }
            else if(dest[i] != TERMINATOR && source[j] == TERMINATOR){
                i++;
                f=0;
            }
            else if(dest[i] == TERMINATOR && source[j] != TERMINATOR){
                j++;
                f=0;
            }
            else if(dest[i]==source[j]){
                i++;
                j++;
            }
            else if(dest[i]<source[j]){
                return -1;
            }
            else if(dest[i]>source[j]){
                return 1;
            }
        }
        if(i==j){
            return 0;
        }
        else if(i<j){
            return -1;
        }
        else if(i>j){
            return 1;
        }
}
