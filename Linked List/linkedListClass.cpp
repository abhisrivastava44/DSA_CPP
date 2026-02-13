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

class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList(){       //constructor
        head=tail=NULL;
        size=0;
    }

    void insertAtEnd(int value){
        Node *temp= new Node(value);    //jo naya value add krna h uske liye node create ho rha h

        if(size==0)     head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtHead(int value){
        Node *temp= new Node(value);    //jo naya value add krna h uske liye node create ho rha h

        if(size==0)     head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void insertAtIndex(int index,int value){
        if(index<0 || index>size)          cout<<"invalid index"<<endl;
        else if(index==0)               insertAtHead(value);
        else if(index==size)            insertAtEnd(value);
        else{
            Node *t=new Node(value);
            Node *temp=head;
            for(int i=1; i<=index-1; i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    int getElementAtAnyIndex(int index){
        if(index<0 || index>=size){
            cout<<"invalid index";
            return -1;
        }

        else if(index==0)               return head->value;
        else if(index==size-1)          return tail->value;
        else{
            Node *temp=head;
            for(int i=1; i<=index; i++){
                temp=temp->next;
            }
            return temp->value;
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        head=head->next;
        size--;
    }

    void deleteAtEnd(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        Node *temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }

    void deleteAtAnyIndex(int index){
        if(size==0){
            cout<<"list is empty";
            return;
        }

        else if(index<0 || index>=size){
            cout<<"invalid index";
            return;
        }

        else if(index==0)       return deleteAtHead();
        else if(index==size-1)      return deleteAtEnd();
        else{
            Node *temp=head;
            for(int i; i<=index-1; i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
    
    }

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;          //{ }
    ll.insertAtEnd(10);     //10->NULL
    ll.display();
    ll.insertAtEnd(20);     //10->20->NULL
    ll.display();
    ll.insertAtEnd(30);     //10->20->30->NULL
    ll.display();
    ll.insertAtEnd(40);     //10->20->30->40->NULL
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtHead(50);    //50->10->20->30->40->NULL
    ll.display();
    ll.insertAtHead(60);    //60->50->10->20->30->40->NULL
    ll.display();
    ll.insertAtIndex(4,70);     //60->50->10->20->70->30->40->NULL
    ll.display();
    cout<<ll.getElementAtAnyIndex(2)<<endl;
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtEnd();
    ll.display();
    ll.deleteAtAnyIndex(2);
    ll.display();
}
