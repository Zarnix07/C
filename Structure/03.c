//Define a structure DISTANCE and implement ADDDISTANCE().
#include <stdio.h>

typedef struct {
    int kms, metres;
} DISTANCE;

DISTANCE ADDDISTANCE(DISTANCE d1, DISTANCE d2) {
    DISTANCE sum;
    sum.kms = d1.kms + d2.kms;
    sum.metres = d1.metres + d2.metres;
    if (sum.metres >= 1000) {
        sum.kms += sum.metres / 1000;
        sum.metres %= 1000;
    }
    return sum;
}

int main() {
    DISTANCE d1, d2, sum;
    printf("Enter first distance (kms metres): ");
    scanf("%d %d", &d1.kms, &d1.metres);
    printf("Enter second distance (kms metres): ");
    scanf("%d %d", &d2.kms, &d2.metres);
    
    sum = ADDDISTANCE(d1, d2);
    printf("Sum of distances: %d kms %d metres\n", sum.kms, sum.metres);
    return 0;
}
