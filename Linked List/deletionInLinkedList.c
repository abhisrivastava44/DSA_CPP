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


struct Node *deletionFromBeginning(struct Node *head)
{
    struct Node *ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct Node *deletionInBetween(struct Node *head,int index)
{
    struct Node *p=head;
    struct Node *q=head->next;
    for(int i=0; i<index-1; i++)
    {
        p=p->next;
        q=q->next;
    }

    p->next=q->next;
    free(q);

    return head;
}

struct Node *deletionFromEnd(struct Node *head)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    
    
    p->next=NULL;
    free(q);

    return head;
}

struct Node *deletionOfGivenValue(struct Node *head,int value)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while(q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    if(q->data==value)
    {
        p->next=q->next;
        free(q);
    }

    return head;
}



int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //these memories are allocated dynaically, so they are stored in HEAP
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));

    //linking first and second nodes
    head->data=4;
    head->next=second;

    //linking second and third nodes
    second->data=3;
    second->next=third;

    //linking third and fourth nodes
    third->data=8;
    third->next=fourth;

    //termination
    fourth->data=1;
    fourth->next=NULL;

    printf("linked list before deletion: ");
    linkedListTraversal(head);
    
    // head=deletionFromBeginning(head);
    // head=deletionInBetween(head,2);
    // head=deletionFromEnd(head);
    head=deletionOfGivenValue(head,8);
    printf("\n");    
    printf("linked list after deletion: ");
    linkedListTraversal(head);

    


    return 0;
}