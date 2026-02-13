#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void printQueueElements(queue<int>&q){
    int n=q.size();
    for(int i=0; i<n; i++){
        int el=q.front();
        cout<<el<<" ";
        q.pop();
        q.push(el);
    }
    cout<<endl;
}

// void printQueueInReverseOrder(queue<int>q){
//     int n=q.size();
//     stack<int>st;

//     // Push all elements into stack
//     for(int i=0; i<n; i++){
//         int el=q.front();
//         q.pop();
//         st.push(el);
//     }

//     // Pop from stack and push back to queue
//     for(int i=0; i<n; i++){
//         int el=st.top();
//         st.pop();
//         q.push(el);  
//     }
//     printQueueElements(q);
// }

void printQueueInReverseOrder(queue<int>q){
    stack<int>st;

    // Push all elements into stack
    while(q.size()>0){
        int el=q.front();
        q.pop();
        st.push(el);
    }

    // Pop from stack and push back to queue
    while(st.size()>0){
        int el=st.top();
        st.pop();
        q.push(el);  
    }
    printQueueElements(q);
}

int main(){
    queue<int>q;
    //push,pop,front,back,size,empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    printQueueElements(q);
    printQueueInReverseOrder(q);
}