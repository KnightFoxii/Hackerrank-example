#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data ; 
    struct Node * next ; 
};

static void reverse(struct Node **head){

    struct Node* prev = NULL;
    struct Node * current = *head;
    stuct Node * next = NULL; 

    while (current!=NULL){
        next = current ->next;
        current->next  = prev;
        prev = current;
        current = next ; 
    }
    *head = prev;
}

int main()
{
    return 0 ;
}