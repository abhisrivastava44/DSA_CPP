#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>&q){
    for(int i=0; i<q.size(); i++){
        int el=q.front();
        cout<<el<<" ";
        q.pop();
        q.push(el);
    }
    cout<<endl;
}
void interleaveQueueElements(queue<int>&q){
    stack<int>st;
    int n=q.size();

    //step 1: pop() 1st half of the queue to the stack
    for(int i=1; i<=n/2; i++){
        int el=q.front();
        st.push(el);
        q.pop();
    }

    //step 2: push() the stack into the queue to the back
    while(st.size()>0){
        int el=st.top();
        q.push(el);
        st.pop();
    }

    //pop() 2nd half of the q to the stack
    for(int i=0; i<n/2; i++){
        int el=q.front();
        st.push(el);
        q.pop();
    }

    //interleave one by one
    while(st.size()>0){
        int el=st.top();
        q.push(el);
        st.pop();

        int x=q.front();
        q.push(x);
        q.pop();
    }

    //reverse the queue
    for(int i=0; i<n; i++){
        int el=q.front();
        st.push(el);
        q.pop();
    }

    while(st.size()>0){
        int el=st.top();
        q.push(el);
        st.pop();
    }
}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    interleaveQueueElements(q);
    display(q);
}