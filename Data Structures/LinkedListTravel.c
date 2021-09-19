#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr){

    while(ptr!=NULL)
    {
        printf("Elements : %d \n",ptr->data);
        ptr = ptr->next;
    }
    
}

int main()
{
    struct Node * head ; 
    struct Node * second ;
    struct Node * third ;
    struct Node * forth ;

    //allocate memory of node in the linked list 
    head = (struct Node *)malloc(sizeof(struct Node)) ;
    second = (struct Node *)malloc(sizeof(struct Node)) ;
    third = (struct Node *)malloc(sizeof(struct Node)) ;
    forth = (struct Node *)malloc(sizeof(struct Node)) ;
    
    //like first and 2nd node 
    head->data = 7;
    head->next = second;

    //like 2nd  and 3nd node 
    second->data = 11;
    second->next = third;
 
    //link 3rd to 4th 
    third->data = 22;
    third->next = forth;

    //terminate
    forth->data = 57;
    forth->next = NULL;

    linkedListTraversal(head);

    return 0;
}