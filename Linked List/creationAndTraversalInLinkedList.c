#include<stdio.h>
#include<stdlib.h> //because hamne malloc use kiya h
struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr!=NULL)
    {
        printf("elements are: %d\n",ptr->data);
        ptr= ptr->next;
        
    }
    
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;

    //these memories are allocated dynaically, so they are stored in HEAP
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));

    //linking first and second nodes
    head->data=7;
    head->next=second;

    //linking second and third nodes
    second->data=11;
    second->next=third;

    //terminate the list at third node
    third->data=66;
    third->next=NULL;

    linkedListTraversal(head);

    

    return 0;
}