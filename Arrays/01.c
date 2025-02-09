//WAP to insert a new element at any position of a partially filled array.
#include<stdio.h>
void Insert(int[],int,int,int);
int main (){
    int arr[10],size,item,position,index;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(index=0;index<size;index++){
        printf("Enter the values: ");
        scanf("%d",&arr[index]);
    }
    printf("Enter the value and position to input: ");
    scanf("%d%d",&item,&position);
    printf("\n Values of arrays before insertion\n");
    for(index=0;index<size;index++){
        printf("%d\t",arr[index]);
    }
    Insert(arr,size,item,position);
}
void Insert(int arr[],int size,int item,int position){
    int index;
    size++;
    index=size-2;
    while(index>=position){
        arr[index+1]=arr[index];
        index--;
    }
    arr[position]=item;
    printf("\n Values of array after insertion\n");
    for(index=0;index<size;index++){
        printf("%d\t",arr[index]);
    }
    return;
}