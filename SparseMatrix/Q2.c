// Function to reconstruct the sparse matrix from its triplet representation.
#include <stdio.h>
void SparseMatrix(int triplet[][3], int rows, int cols, int nonZero) {
    int i, j;
    // Initialize the original matrix with all zeros
    int matrix[rows][cols];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            matrix[i][j] = 0;
        }
    }
    // Fill the matrix with non-zero values from the triplet
    for (i = 0; i < nonZero; i++) {
        int row = triplet[i][0];
        int col = triplet[i][1];
        int value = triplet[i][2];
        matrix[row][col] = value;
    }
    // Print the reconstructed matrix
    printf("Reconstructed Sparse Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols, nonZero;
    printf("Enter the number of rows, columns, and non-zero elements: ");
    scanf("%d %d %d", &rows, &cols, &nonZero);
    int triplet[nonZero][3];
    printf("Enter the triplet representation (Row, Column, Value):\n");
    for (int i = 0; i < nonZero; i++) {
        scanf("%d %d %d", &triplet[i][0], &triplet[i][1], &triplet[i][2]);
    }
    SparseMatrix(triplet, rows, cols, nonZero);
    return 0;
}