// Function to find the triplet representation of a sparse matrix
#include <stdio.h>
void Triplet(int matrix[][100], int rows, int cols) {
    int i, j;
    int nonZero=0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                nonZero++;
            }
        }
    }
    int triplet[nonZero+1][3];
    triplet[0][0]=rows;
    triplet[0][1]=cols;
    triplet[0][2]=nonZero;
    int temp=1;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                triplet[temp][0] = i; // Row index
                triplet[temp][1] = j; // Column index
                triplet[temp][2] = matrix[i][j]; // Non-zero value
                temp++;
            }
        }
    }
    printf("Triplet Representation of the Sparse Matrix:\n");
    printf("Row\tColumn\tValue\n");
    for (i = 0; i <= nonZero; i++) {
        printf("%d\t%d\t%d\n", triplet[i][0], triplet[i][1], triplet[i][2]);
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);
    int matrix[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    Triplet(matrix, rows, cols);
    return 0;
}