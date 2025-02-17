#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, size, item, index, flag = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    arr = (int *)malloc(size * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (index = 0; index < size; index++) {
        scanf("%d", &arr[index]);
    }
    
    printf("Enter the element to search: ");
    scanf("%d", &item);
    
    for (index = 0; index < size; index++) {
        if (arr[index] == item) {
            flag = 1;
            printf("Element found at index %d\n", index);
            break;
        }
    }
    
    if (flag == 0) {
        printf("Element not found in the array.\n");
    }
    
    free(arr);
    return 0;
}
