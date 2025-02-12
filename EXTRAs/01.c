//Linear search using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, key, flag = 0;
    int *arr, *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements: ", n);
    for (ptr = arr; ptr < arr + n; ptr++) {
        scanf("%d", ptr);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    for (ptr = arr; ptr < arr + n; ptr++) {
        if (*ptr == key) {
            printf("Element %d found at index %ld\n", key, ptr - arr);
            flag = 1; 
            break;     
        }
    }
    if (flag == 0) {
        printf("Element %d not found in the array.\n", key);
    }
    free(arr);
    return 0;
}
