//Point in 2D Space.
#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {10, 20};
    
    printf("Point Coordinates: (%d, %d)\n", p1.x, p1.y);

    return 0;
}
