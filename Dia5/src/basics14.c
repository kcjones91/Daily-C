#include <stdio.h>

/*  While loops in C examples

    while (condition) {
        Do stuff here
    }


*/


// Function to print numbers in reverse
void print_numbers_reverse(int start, int end) {
    int i = start;

    while (i >= end) {
        printf("%d\n", i);
        i--;
    }
}

int main() {
    print_numbers_reverse(20,10);

}