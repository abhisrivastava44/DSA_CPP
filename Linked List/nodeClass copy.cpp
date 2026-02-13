#include<iostream>
using namespace std;
class Node{     
    public:
        int value;
        Node *next;

        Node(int value){          
            this->value=value;
            this->next=NULL;  
        }      
};

void display(Node *head){   //displaying a linked list recursively
    if(head==NULL)      return;
    cout<<head->value<<" ";
    display(head->next);
}

int size(Node *head){       //size of linked list
    Node *temp=head;
    int n=0;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    return n;
}

int main(){
    Node *a=new Node(10);   //a naam ka ek variable bna jo ek aise dabbe address store krta h jisme 10 ho
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    display(a);
    cout<<endl;
    cout<<size(a);
}

