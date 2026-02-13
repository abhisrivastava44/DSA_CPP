#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> &st){
    if(st.size()==0)        return;

    int x=st.top();
    
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

void pushAtBottomRecursively(stack<int> &st,int value){     //similar to displayStackRecursively function--->stack ko hhaali krte rho ar jb poora khaali ho jaaye to last m bs ek value add kara do
    if(st.size()==0){
        st.push(value);
        return;
    }

    int x=st.top();
    
    st.pop();
    pushAtBottomRecursively(st,value);
    st.push(x);
}

void reverseStack(stack<int> &st){
    if(st.size()==1)        return;
    int x=st.top();
    st.pop();
    reverseStack(st);
    pushAtBottomRecursively(st,x);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;

    reverseStack(st);
    display(st);



}