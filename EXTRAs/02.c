//Sort an array in ascending order using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, *ptr1, *ptr2, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    printf("Enter %d elements: ", n);
    for (ptr1 = arr; ptr1 < arr + n; ptr1++) {
        scanf("%d", ptr1);
    }
    for (ptr1 = arr; ptr1 < arr + n - 1; ptr1++) {
        for (ptr2 = ptr1 + 1; ptr2 < arr + n; ptr2++) {
            if (*ptr1 > *ptr2) {
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
        }
    }
    printf("Sorted array in ascending order: ");
    for (ptr1 = arr; ptr1 < arr + n; ptr1++) {
        printf("%d ", *ptr1);
    }
    printf("\n");
    free(arr);

    return 0;
}
