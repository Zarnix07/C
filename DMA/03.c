#include <stdio.h>
#include <stdlib.h>

int Sum(int arr[], int n) {
    int sum = 0;
    for (int index = 0; index < n; index++)
        sum += arr[index];
    return sum;
}

int main() {
    int *arr, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    arr = (int *)malloc(n * sizeof(int));    
    printf("Enter elements: ");
    for (int index = 0; index < n; index++)
        scanf("%d", &arr[index]);
    
    printf("Sum: %d\n", Sum(arr, n));
    
    free(arr);
    return 0;
}
