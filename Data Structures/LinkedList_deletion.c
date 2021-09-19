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
// Case 1 : Deleting the first element

struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;

    head = head->next;
    free(ptr);

    return head;

}

//Case 2 : Delete at index
struct Node * deleteAtIndex(struct Node * head,int index){
    
    struct Node * p = head;
    struct Node * q = head->next;

    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);

    return head;

}
//Case 3 : Delete the last node 
struct Node * deleteAtLast(struct Node * head){
    
    struct Node * p = head;
    struct Node * q = head->next;

    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);

    return head;

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
    head->data = 4;
    head->next = second;

    //like 2nd  and 3nd node 
    second->data = 3;
    second->next = third;

    //link 3rd to 4th 
    third->data = 8;
    third->next = forth;

    //terminate
    forth->data = 1;
    forth->next = NULL;

    printf("Linkedlist before deletion : \n");
    linkedListTraversal(head);

    //head = deleteFirst(head); // Case 1
    //head = deleteAtIndex(head , 2); // Case 2
    head = deleteAtLast(head);
    printf("Linkedlist after deletion : \n");
    linkedListTraversal(head);

    return 0;
}