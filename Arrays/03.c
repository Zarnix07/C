//Merge Two Arrays.
#include <stdio.h>
void Merge(int arr1[], int n1, int arr2[], int n2, int res[]){
    int index;
    for (index = 0; index < n1; index++)
        res[index] = arr1[index];
    for (index = 0; index < n2; index++)
        res[n1 + index] = arr2[index];
}
int main() {
    int arr1[50], arr2[50], res[100], n1, n2;
    int index;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements: ");
    for (index = 0; index < n1; index++)
        scanf("%d", &arr1[index]);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements: ");
    for (index = 0; index < n2; index++)
        scanf("%d", &arr2[index]);

    Merge(arr1, n1, arr2, n2, res);
    printf("Merged array: ");
    for (index = 0; index < n1 + n2; index++)
        printf("%d ", res[index]);
    return 0;
}
