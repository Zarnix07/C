//Allocate memory dynamically for an integer array and display sum.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, sum = 0;
    arr = (int*)malloc(10 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    free(arr);
    return 0;
}
