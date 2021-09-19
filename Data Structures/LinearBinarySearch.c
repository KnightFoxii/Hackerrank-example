#include<stdio.h>

int linearSearch(int arr[],int size , int element){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
    
}
int binarySearch(int arr[],int size , int element){
    int low = 0 , mid , high = size -1;

    while(low<=high){ // keep searching until your low = high 

        mid = (low + high)/2 ;

        if(arr[mid] == element){

            return mid;
        }

        if (arr[mid] < element){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
    
}


int main()
{
    // unsorted array for linear search
    // int arr[] = {1,3,2,4,12,66,42,13,54,77,22,51};
    // int size = sizeof(arr)/sizeof(int);

    int arr[] = {1,2,3,4,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 1;   
    // int searchIndex = linearSearch(arr ,size, element);
    int searchIndex = binarySearch(arr ,size, element);

    printf("elemet %d is found at index %d ", element , searchIndex);
    return 0;
}
