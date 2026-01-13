#include <stdio.h>

/* For loop in C example

    for (initialization; condition; update){
        code to be executed in repitition
    }

*/

// Function to add shit
void print_numbers(int start, int end) {
    printf("Printing from %d to %d\n", start, end);
    for (int i = start; i < end; i++) {
        printf("%d\n", i);
    }
}

int main(){
    print_numbers(10, 20);
}

