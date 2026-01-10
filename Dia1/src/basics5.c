#include <stdio.h>


int main() {

    char *will_never_hear_again = "Hey, soon we will be exploring memory in C";

    // We use the %s for string. String types in C are just arrays
    printf("%s\n", will_never_hear_again);
    return 0;

}