//Sum of Elements in an Array.
#include <stdio.h>
int Sum(int arr[], int n){
    int sum = 0;
    int index;
    for (index = 0; index < n; index ++)
        sum += arr[index];
    return sum;
}
int main() {
    int arr[100], n;
    int index;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (index = 0; index < n; index++)
        scanf("%d", &arr[index]);

    printf("Sum: %d\n", Sum(arr, n));
    return 0;
}
