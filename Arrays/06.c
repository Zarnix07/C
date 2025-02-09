//Transpose of the matrix.
#include <stdio.h>
void Transpose(int mtx[10][10], int r, int c){
    int i,j;
    int transposed[10][10];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            transposed[j][i] = mtx[i][j];

    printf("Transposed Matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++)
            printf("%d ", transposed[i][j]);
        printf("\n");
    }
}

int main() {
    int mtx[10][10], r, c;
    int i,j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &mtx[i][j]);

    Transpose(mtx, r, c);
    return 0;
}
