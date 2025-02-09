//WAP to delete an element from a given position of an array.
#include<stdio.h>
void Delete(int[],int,int);
int main () {
    int arr[10],size,position,index;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(index=0;index<size;index++){
        printf("Enter the values: ");
        scanf("%d",&arr[index]);
    }
    printf("Enter the position you want to delete: ");
    scanf("%d",&position);
    printf("\n Values of array before deletion\n");
    for(index=0;index<size;index++){
        printf("%d\t",arr[index]);
    }
    Delete(arr,size,position);
}
void Delete(int arr[],int size,int position){
    int index;
    for(index=position-1;index<size;index++){
        arr[index]=arr[index+1];
    }
    printf("\n Values of arrays after deletion\n");
    for(index=0;index<size-1;index++){
        printf("%d\t",arr[index]);
    }
    return;
}