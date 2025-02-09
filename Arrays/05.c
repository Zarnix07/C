//Sum of Elements in an Array.
#include <stdio.h>

int Largest(int arr[], int n){
    int index;
    int max = arr[0];
    for (index = 1; index < n; index++)
        if (arr[index] > max)
            max = arr[index];
    return max;
}

int main() {
    int arr[100], n;
    int index;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (index = 0; index < n; index++)
        scanf("%d", &arr[index]);

    printf("Largest: %d\n", Largest(arr, n));
    return 0;
}
