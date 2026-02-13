#include<iostream>
#include<stack>
using namespace std;

void displayRecursivelyInReverseOrder(stack<int> &st){
    if(st.size()==0)        return;

    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayRecursivelyInReverseOrder(st);
    st.push(x);
}

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

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    displayRecursivelyInReverseOrder(st);
    cout<<endl;
    display(st);
    cout<<endl;

    pushAtBottomRecursively(st,-10);
    display(st);
}
