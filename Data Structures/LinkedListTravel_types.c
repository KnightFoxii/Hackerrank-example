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

struct Node * insertAtFirst(struct Node * head , int data){

    struct Node * ptr ;
    ptr = (struct Node *) malloc (sizeof(struct Node));

    ptr->next = head ;
    ptr->data = data ;
    return ptr ; 
}
struct Node * insertAtEnd(struct Node * head , int data){

    struct Node * ptr ;
    ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->data = data;

    struct Node * p = head ;

    while(p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;
   

    return head;
    
}

struct Node * insertAfterNode(struct Node * head ,struct Node * prevNode , int data){

    struct Node * ptr ;
    ptr = (struct Node *) malloc (sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
    
}

struct Node * insertAtIndex(struct Node * head , int data, int index){

    struct Node * ptr ;
    ptr = (struct Node *) malloc (sizeof(struct Node));

    struct Node * p = head ;

    int i = 0;

    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr ;

    return head;

}

int main()
{
    //name of the node 
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
    //head = insertAtFirst(head , 56);
    //head = insertAtIndex(head , 56 , 2);
    //head = insertAtEnd(head , 90);
    head = insertAfterNode(head , second,  45);
    printf("\n");
    linkedListTraversal(head);

    return 0;
}
