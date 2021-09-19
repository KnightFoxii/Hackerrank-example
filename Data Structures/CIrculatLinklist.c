#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node * next ; 
};

void CircularLinkedlistTraversal(struct Node * head){

    struct Node * ptr = head;    
    do{
        
        printf("elemetns : %d \n",ptr->data);
        ptr = ptr->next;

    }while(ptr!=head);
}

struct Node * InsertAtFirst(struct Node * head , int data){

    struct Node * ptr = (struct Node *) malloc (sizeof(struct Node)); 
    ptr->data = data;

    struct Node * p = head->next ; 

    while(p->next != head){
        p = p->next;
    } // p is poiniting to the last node of the circular link list

    p->next = ptr ;
    ptr->next = head ; 
    head = ptr ;
    return head;     

}
int main()
{

    struct Node * head ; 
    struct Node * second;
    struct Node * third ; 
    struct Node * forth ;

    head = (struct Node * )malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third =(struct Node *) malloc(sizeof(struct Node));
    forth =(struct Node *) malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11 ; 
    second->next = third;

    third->data = 22 ; 
    third->next = forth;

    forth->data = 57;
    forth->next = head;

    printf("Circular Linklist before change : \n"); 
    CircularLinkedlistTraversal(head);
    printf("\n");

    head = InsertAtFirst(head , 80);

    printf("Circular Linklist after change :\n "); 
    CircularLinkedlistTraversal(head);

    return 0;
}
