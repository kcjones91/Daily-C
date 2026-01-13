#include <stdio.h>
#include <stdbool.h>

// Use %zu is for printing sizeof result
// Reviewing libraries in C. Using sizeof function

int main(){

    // Char value 1 byte
    printf("sizeof(char)  = %zu\n", sizeof(char));


    // Bool value 1 byte
    printf("sizeof(bool) =  %zu\n", sizeof(bool));

    // Int value 1 byte
    printf("sizeof(int) =  %zu\n", sizeof(int));

    // float are 4 bytes -represents single-precision floating-point number.
    printf("sizeof(float) =  %zu\n", sizeof(float));

    // double 8 bytes in length - Double percision floating-point number. 
    printf("sizeof(double) =  %zu\n", sizeof(double));

    // size_t_type is a special type that is guaranteed to to be able to represent the size of the largest possible object
    printf("sizeof(size_t) =  %zu\n", sizeof(size_t));

}



