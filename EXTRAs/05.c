//Reverse an Array (Without Using Another Array).
#include <stdio.h>

void reverseArray(int arr[], int size) {
    int temp, start = 0, end = size - 1;

    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    reverseArray(arr, size);

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
