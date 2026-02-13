#include<iostream>
using namespace std;
class Node{             //forming a node
    public:
        int value;
        Node *next;
        Node *prev;

        Node(int value){
            this->value=value;
            this->next=NULL;
            this->prev=NULL;        //extra
        }
};


class doublyLinkedList{
public:
    Node *head;
    Node *tail;
    int size;

    doublyLinkedList(){       //constructor
        head=tail=NULL;
        size=0;
    }

    void insertAtEnd(int value){
        Node *temp= new Node(value);    //jo naya value add krna h uske liye node create ho rha h

        if(size==0)     head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;        //extra
            tail=temp;
        }
        size++;
    }

    void insertAtHead(int value){
        Node *temp= new Node(value);    //jo naya value add krna h uske liye node create ho rha h

        if(size==0)     head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;        //extra
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
            t->prev=temp;           //extra
            t->next->prev=t;        //extra
            size++;
        }
    }

    
    int getElementAtAnyIndex(int index){        //method 1
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


    int getElementAtAnyIndexOptimized(int index){        //method 2
        if(index<0 || index>=size){
            cout<<"invalid index";
            return -1;
        }

        else if(index==0)               return head->value;
        else if(index==size-1)          return tail->value;
        else{
            if(index<size/2){
                Node *temp=head;
                for(int i=1; i<=index; i++){
                    temp=temp->next;
                }
                return temp->value;
            }

            else{   //index>(size/2)
                Node *temp=tail;
                for(int i=1; i<size-index; i++){
                    temp=temp->prev;
                }
                return temp->value;
            }
        }
    }

    void deleteAtHead(){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        head=head->next;
        if(head!=NULL)      head->prev=NULL;        //extra
        if(head==NULL)      tail=NULL;              //extra
        size--;
    }

    void deleteAtEnd(){
        if(size==0){
            cout<<"list is empty";
            return;
        }

        else if(size==1){                           //extra
            deleteAtHead();
            return;
        }


        Node *temp=tail->prev;                  //extra
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
            temp->next->prev=temp;          //extra
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
    // Node *a= new Node(10);
    // Node *b= new Node(20);
    // Node *c= new Node(30);
    // Node *d= new Node(40);
    // Node *e= new Node(50);
    // a->next=b;  //forward connections
    // b->next=c;
    // c->next=d;
    // d->next=e;
    
    // e->prev=d;  //backward connection
    // d->prev=c;
    // c->prev=b;
    // b->prev=a;

    // displayUsingTail(e);

    doublyLinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.display();
    list.insertAtHead(50);
    list.display();
    list.insertAtIndex(2,60);
    list.display();
    list.deleteAtEnd();
    list.display();
    list.deleteAtAnyIndex(3);
    list.display();
    cout<<list.getElementAtAnyIndex(2)<<endl;
    cout<<list.getElementAtAnyIndexOptimized(3);

}