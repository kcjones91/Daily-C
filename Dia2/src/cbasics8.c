// This lab was to demonstrate functions in C
#include <stdio.h>

// This function will return a int type. Functions in C must specify the types for their arguments and return values.
// https://en.wikipedia.org/wiki/Void_type additional reads here
int max_sneklang_memory(int max_threads, int memory_per_thread) {
    return max_threads * memory_per_thread;
}

// void functions does not return any value
// Two primary ways we will use void one as seen below, when function does not return anything
void init_sneklang(int max_threads, int memory_per_thread) {
    printf("Intializing Sneklang\n");
    printf("Max threads: %d\n", max_threads);
    printf("Memory per thread: %d\n", memory_per_thread);
    int max_memory = max_sneklang_memory(max_threads, memory_per_thread);
    printf("Max memory: %d\n", max_memory);
    printf("====================================\n");
}

// Additonal way is when we explicity state that a function takes no arguments
int get_integer(void) {
    return 67;
}

int main() {
    init_sneklang(4, 512);
    init_sneklang(8, 1024);
    init_sneklang(16, 2048);


    int life_be_lifing = get_integer();
    printf("The answer to life is %d.\n", life_be_lifing);
    return 0;
}