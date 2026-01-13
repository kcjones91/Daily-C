#include <stdio.h>


/* Do while example in C

    do {
        loop body
    } while (condtion);

*/

void print_numbers_reverse(int start, int end) {
    do  {
        printf("%d\n", start);
        start --;
        } while (start >= end);
}


int main() {
    print_numbers_reverse(5,1);

}