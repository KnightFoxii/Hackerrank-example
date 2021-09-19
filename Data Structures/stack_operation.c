#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size ;
    int top ;
    int  * arr  ;
};

int isFull(struct stack * ptr ){

    if(ptr->top == ptr->size-1)
    {
        return 1 ; 
    }  
    else{
        return 0 ;
    }
}

int isEmpty(struct stack * ptr ){

    if(ptr->top == -1){

        return 1 ;
    }
    else{
        return 0 ;
    }
    
}
void push(struct stack * ptr , int value){

    if(isFull(ptr)){
        printf("stack overflow \n");
    }

    ptr->top + 1 ;
    ptr->arr[ptr->top] = value; 

}

int pop(struct stack * ptr){

    if(isEmpty(ptr)){
        printf("stack underflow \n");
        return -1;
    }

    value = ptr->arr[ptr->top];
    sp->top -1 ;
    return value ; 
}

int main(){

    struct stack * sp = (struct stack *) malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 10 ;
    
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    printf("array has been created \n\n");

    printf("Stack full :%d \n", isFull(sp));
    printf("Stack empty :%d \n", isEmpty(sp));
    push(sp ,56) ; 
    printf("Stack full : %d \n", isFull(sp));
    printf("Stack empty : %d \n", isEmpty(sp));
    
    return 0 ;
    
}