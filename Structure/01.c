//Define a structure POINT and find the distance between two points.
#include <stdio.h>
#include <math.h>

typedef struct {
    float Xco, Yco;
} POINT;

float distance(POINT p1, POINT p2) {
    return sqrt(pow(p2.Xco - p1.Xco, 2) + pow(p2.Yco - p1.Yco, 2));
}

int main() {
    POINT p1, p2;
    printf("Enter coordinates of first point (Xco Yco): ");
    scanf("%f %f", &p1.Xco, &p1.Yco);
    printf("Enter coordinates of second point (Xco Yco): ");
    scanf("%f %f", &p2.Xco, &p2.Yco);
    printf("Distance between points: %.2f\n", distance(p1, p2));
    return 0;
}
