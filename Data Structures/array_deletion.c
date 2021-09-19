#include<stdio.h>

void display(int arr[], int n){
    //Traversal array

    for (int i = 0;i < n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void indexDeletion(int arr[] ,int size,int index){
    //element Deletion

    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }    
    
}

int main()
{
    int arr[100] = {7,8,12,77,88}; // reserved space for 100 elements
    int size = 5,index = 0;
    display(arr,size);
    indexDeletion(arr,size,index);
    size -= 1;
    display(arr,size);

    return 0;
}
