#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    vector<int> v;      //vector is also of unlimited size--->so isme overflow condition nhi aata h
   
    
    void push(int value){
        v.push_back(value);
    }

    void pop(){
        if(v.size()==0){
            cout<<"stack is empty."<<endl;
            return;
        }

        v.pop_back();
    }

    int top(){
        if(v.size()==0){
            cout<<"stack is empty."<<endl;
            return -1;
        }

        return v[v.size()-1];
    }

    int size(){
        return v.size();
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

