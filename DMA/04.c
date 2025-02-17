#include <stdio.h>
#include <stdlib.h>

int Largest(int arr[], int n) {
    int max = arr[0];
    for (int index = 1; index < n; index++)
        if (arr[index] > max)
            max = arr[index];
    return max;
}

int main() {
    int *arr, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (int index = 0; index < n; index++)
        scanf("%d", &arr[index]);
    
    printf("Largest: %d\n", Largest(arr, n));
    
    free(arr);
    return 0;
}
