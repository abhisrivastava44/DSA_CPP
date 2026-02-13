#include<stdio.h>
#include<stdlib.h>

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

struct Node *insertAtBeginning(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;
}

struct Node *insertInBetween(struct Node *head,int data,int index)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;

    int i=0;
    while(i!=index-1)
    {
        p=ptr->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

struct Node *insertAfterNode(struct Node *head,struct Node *previousNode,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    ptr->next=previousNode->next;
    previousNode->next=ptr;

    return head;
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
    // head=insertAtBeginning(head,56);
    // head=insertInBetween(head,56,1);
    // head=insertAtEnd(head,56);
    head=insertAfterNode(head,second,56);
    printf("\n");
    linkedListTraversal(head);


    return 0;
}
    
    

   