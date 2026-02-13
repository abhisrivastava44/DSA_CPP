#include<iostream>
using namespace std;

class Stack{
public:
    int a[5];
    int index;
    
    Stack(){          //constructor
        index=-1;
    }
    
    void push(int value){
        if(index==sizeof(a)/sizeof(a[0])-1){
            cout<<"stack is full"<<endl;
            return;
        }

        index++;
        a[index]=value;
    }

    void pop(){
        if(index==-1){
            cout<<"stack is empty."<<endl;
            return;
        }

        index--;
    }

    int top(){
        if(index==-1){
            cout<<"stack is empty."<<endl;
            return -1;
        }

        return a[index];
    }

    int size(){
        return index+1;
    }

};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    
}

