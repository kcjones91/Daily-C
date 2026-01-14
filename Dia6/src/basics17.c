#include <stdio.h>


/* attribute__((constructor())) is a compiler-specific directive that instructs
   the linker to run a specfic function before the main() function executes.
*/


 // Function protoypes with specific execution order
 // The numbers define the order in which the "prain main" function runs.
 // Range 0-100: Reserved for the system(Compiler/standard library)
 // Range 101-65535 available for user-defined functions
void setup_logs() __attribute__((constructor(101)));
void load_config() __attribute__((constructor(102)));

void setup_logs() {
    printf("1. System: Initializing Logs...\n");
}

void load_config() {
    printf("2. System: Loading Configuration...\n");
}

int main() {
    printf("3. Application: Running main()...\n");
    return 0;
}
