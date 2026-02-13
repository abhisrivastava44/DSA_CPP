#include<iostream>
using namespace std;
class Node{     //DLL
public:
    int value;
    Node* next;
    Node* prev;  //extra for DLL
    Node(int value){
        this->value=value;
        this->next=NULL;
        this->prev=NULL;    //extra for DLL
    }
};

class Dequeue{  //user defined data structure
public:
    Node* head;
    Node* tail;
    int n;  //n-->represents size
    Dequeue(){
        head=tail=NULL;
        n=0;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void push_back(int value){
        Node* temp=new Node(value);
        if(n==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        n++;
    }

    void push_front(int value){
        Node* temp=new Node(value);
        if(n==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;    //if the list is not empty.
            head=temp;
        }
        n++;
    }

    void pop_front(){
        if(n==0){
            cout<<"List is empty";
            return;
        }
        head=head->next;
        if(head)    head->prev=NULL;
        if(head==NULL)  tail=NULL;
        n--;
    }

    void pop_back(){
        if(n==0){
            cout<<"List is empty";
            return;
        }
        else if(n==1){
            pop_front();
            return;
        }
        Node *temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        n--;
    }

    int front(){
        if(n==0){
            cout<<"List is empty";
            return -1;
        }
        return head->value;
    }

    int back(){
        if(n==0){
            cout<<"List is empty";
            return -1;
        }
        return tail->value;
    }

    int size(){
        return n;
    }
        
    bool empty(){
        if(n==0)    return true;
        else        return false;
    }
    
};

int main(){
    Dequeue dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.display();
    dq.pop_back();
    dq.display();
    dq.pop_front();
    dq.display();
    dq.push_front(50);
    dq.display();
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
}


