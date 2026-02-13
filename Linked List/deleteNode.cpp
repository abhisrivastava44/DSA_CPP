#include<iostream>
using namespace std;
class Node{             //forming a node
    public:
        int value;
        Node *next;

        Node(int value){
            this->value=value;
            this->next=NULL;
        }
};

void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* deleteNode(Node *head,Node *target){
    if(head==target){                           //agar head hi delete krna ho to yehh condition do
        head=head->next;
        return head;
    }
    Node *temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}

int main(){
    Node *a=new Node(10);    
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    Node *e=new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    Node *head=a;
    display(head);
    head=deleteNode(head,a);
    display(head);

  
}
