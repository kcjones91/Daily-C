#include <stdio.h>


// Working with varaibles in C. Must be declared before initialized.
int main () {

    int max_recursive_calls;
    char io_mode;
    float throttle_speed;

    max_recursive_calls = 100;
    io_mode = 'w';
    throttle_speed = 0.2;
    
    /*
        %d works for int variables
        %f for floats
        %c for characters
    */
    printf("Max recusrive calls: %d\n", max_recursive_calls);
    printf("IO mode: %c\n", io_mode);
    printf("Throttle speed: %f\n", throttle_speed);
    return 0;
}