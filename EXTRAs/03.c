//Reverse an array using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, *start, *end, temp;

    // Taking input for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit the program if memory allocation fails
    }
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);  
    }
    start = arr;       
    end = arr + n - 1;  

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); 
    }
    printf("\n");
    free(arr);
    return 0;
}
