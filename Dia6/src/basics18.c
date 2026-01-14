#include <stdio.h>

// Additional introductions to structs using the designated Initilizer
struct Coordinate {
    int x;
    int y;
    int z;
};

struct Coordinate new_coord(int x, int y, int z) {
    struct Coordinate coord = {
        .x = x,
        .y = y,
        .z = z
    };
    return coord;
}

// Create helper function to print
// Passing the address of the struct instead of copying the entire object
void print_coord(struct Coordinate *c) {
    // To access members through a pointer we use -> instead of .
    printf("(%d, %d, %d)\n", c->x, c->y, c->z);
}


int main() {
    struct Coordinate point = new_coord(100, 101, 103);
    print_coord(&point);
    return 0;
}
