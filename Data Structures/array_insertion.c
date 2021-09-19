#include<stdio.h>

void display(int arr[], int n){
    //Traversal array

    for (int i = 0;i < n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void indexInsertion(int arr[] ,int size,int element,int capacity,int index){
    //element insertion
    if(size>=capacity)
    {
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
    
    
}

int main()
{
    int arr[100] = {7,8,12,77,88}; // reserved space for 100 elements
    int size = 5,element = 1,index = 0;
    display(arr,size);
    indexInsertion(arr,size,element,100,index);
    size +=1;
    display(arr,size);

    return 0;
}
