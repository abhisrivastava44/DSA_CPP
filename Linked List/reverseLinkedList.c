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

struct Node *reverse(struct Node *head)
{
    struct Node *previous=NULL;
    struct Node *counter=NULL;
    while(head!=NULL)
    {
        counter=head->next;
        head->next=previous;
        previous=head;
        head=counter;
    }
    
    return previous;

}

int main()
{

    struct Node *head=(struct Node *)malloc(sizeof(struct Node));
    struct Node *second=(struct Node *)malloc(sizeof(struct Node));
    struct Node *third=(struct Node *)malloc(sizeof(struct Node));
    
    head->data=1;
    head->next=second;

    second->data=2;
    head->next=third;

    third->data=3;
    third->next=NULL;

    printf("original lisnked list is: ");
    linkedListTraversal(head);

    head=reverse(head);

    printf("\n");

    printf("reversed lisnked list is: \n");
    linkedListTraversal(head);

    free(third);
    free(second);
    free(head);
    return 0;
}