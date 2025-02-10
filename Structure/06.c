//Check if an element is present in a dynamically allocated array.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("%d is present in the array.\n", key);
    } else {
        printf("%d is not present in the array.\n", key);
    }

    free(arr);
    return 0;
}