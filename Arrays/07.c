// Multiply Two Matrices.
#include <stdio.h>
void Multiply(int mtx1[10][10], int r1, int c1, int mtx2[10][10], int r2, int c2) {
    int i,j,k;
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return;
    }
    
    int result[10][10] = {0};
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            for (k = 0; k < c1; k++)
                result[i][j] += mtx1[i][k] * mtx2[k][j];

    printf("Product of matrices:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }
}

int main() {
    int mtx1[10][10], mtx2[10][10], r1, c1, r2, c2;
    int i,j;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter first matrix elements:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &mtx1[i][j]);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter second matrix elements:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &mtx2[i][j]);

    Multiply(mtx1, r1, c1, mtx2, r2, c2);
    return 0;
}
