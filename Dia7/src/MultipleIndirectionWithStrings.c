#include <stdio.h>

#define LENGTH 3


char* words[LENGTH];

int main(int argc, char **argv) {
    char *pc; // a pointer to a character
    char **ppc; // a pointer to a pointer to a character
    
    printf("multiple indirection example\n");

    // initialize our string array
    words[0] = "zero";
    words[1] = "one";
    words[2] = "two";
    for (int i = 0; i < LENGTH; i++) {
        printf("%s\n", words[i]);
    }

    /*
        a pointer to an array of strings 
            - the sma e as point to a pointer to char

    */

    printf("\nNow print the chars in each string...\n");
    ppc = words;                             //initialize the point to a pointer to a character
    for (int i = 0; i < LENGTH; i++) {      //loop over each string
        ppc = words + i;
        pc = *ppc;              
        while (*pc !=0) {                  // process each character in a string
            printf("%c", *pc);             // print out each character of the string individual
            pc += 1;
        }
        printf("\n");
    }

    return 0;
}