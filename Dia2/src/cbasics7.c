// This lesson is simply to demonstrate that types cannot be changed in C however, values can be changed.
#include <stdio.h>

int main(){
    int sneklang_int_size = 64;
    sneklang_int_size = 32;

    // Decided to demonstrate const these values are placed in read-only memory only.
    const int sneklang_int_const = 255;
    
    printf("Sneklang int size: %d bits\n", sneklang_int_size);
    printf("Sneklang int size for const: %d bits\n", sneklang_int_const);
    return 0;
}