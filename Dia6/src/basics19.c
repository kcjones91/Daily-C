#include <stdio.h>

// Scaling coordinate lab
struct Coordinate {
    int x;
    int y;
    int z;
};

struct Coordinate new_coord(int x, int y, int z){
    struct Coordinate coord = {
        .x = x,
        .y = y,
        .z = z
    };
    return coord;

};



int main(){


}