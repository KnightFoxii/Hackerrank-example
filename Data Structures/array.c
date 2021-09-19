#include <stdio.h>

struct myarray{

    int total_size; //memory to be reserved
    int used_size; //memory to be used 
    int *ptr // points to the 1st element of an array 

};

void createArray(struct myarray * a,int tSize, int uSize){
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = (int *) malloc(tSize*sizeof(int))

    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *)malloc(tSize *  sizeof(int));
}
void setVal(struct myarray * a){
    int n ;
    for (int i =  0; i< a->used_size ; i++)
    {
        printf("enter elements to add in an array %d : ",i);
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
}

void show(struct myarray * a){
    for (int i =  0; i< a->used_size ; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}


int main(){

    struct myarray marks;
    createArray(&marks,10,2);
    setVal(&marks);
    show(&marks);
    return 0;
}
