#include<iostream>
using namespace std;

class Node{
public:
    int value;
    Node *next;

    Node(int value){        //constructor
        this->value=value;
        this->next=NULL;
    }
};

class Stack{
public:
    Node *head;
    int size;
    
    Stack(){          //constructor
        head=NULL;
        size=0;
    }
    
    void push(int value){
        Node *temp= new Node(value);
        temp->next=head;
        head=temp;
        size++;
    }

    void pop(){
        if(head==NULL){
            cout<<"stack is empty."<<endl;
            return;
        }

        head=head->next;
        size--;
    }

    int top(){
        if(head==NULL){
            cout<<"stack is empty."<<endl;
            return -1;
        }

        return head->value;
    }

    // void display(){             //reverse m print ho jaata h
    //     Node *temp=head;
    //     while(temp!=NULL){
    //         cout<<temp->value<<" ";
    //         temp=temp->next;
    //     }
    //     cout<<endl;
    // }

    void print(Node *temp){
        if(temp==NULL)      return;
        print(temp->next);
        cout<<temp->value<<" ";
    }

    void display(){
        Node *temp=head;
        print(temp);
        cout<<endl;
    }

};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.size<<endl;
    st.pop();
    cout<<st.size<<endl;
    cout<<st.top()<<endl;
    st.display();

    
    
}

