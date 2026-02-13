#include<iostream>
#include<vector>
using namespace std;

class Node{ //user defined datatype
public:
    int value;
    Node *next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};

class Queue{
public:
    Node* head;
    Node* tail;
    int n; //n denotes size of linked list
    Queue(){
        head=tail=NULL;
        n=0;
    }

    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->value<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    void push(int value){   //insertAtTail
        Node* temp=new Node(value);
        if(n==0)     head=tail=temp;
        else{
            tail->next=temp;    // Link current tail to new node
            tail=temp;          // Move tail pointer to new node
        }
        n++;
    }

    void pop(){ //deleteAtHead
        if(n==0){
            cout<<"queue is empty.";
            return;
        }
        Node* temp=head;
        head=head->next;
        n--;
        delete(temp);
    }

    int front(){
        if(n==0){
            cout<<"queue is empty.";
            return -1;
        }
        return head->value;
    }

    int back(){
        if(n==0){
            cout<<"queue is empty.";
            return -1;
        }
        return tail->value;
    }

    void size(){
        cout<<"the size of the queue is: "<<n<<endl;
    }

    bool empty(){
        if(n==0)   return true;
        else          return false;
    }
};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(60);
    q.display();
    q.pop();
    q.display();
    q.size();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    cout<<q.empty()<<endl;
}