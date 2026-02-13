// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;

// void displayQueue(queue<int>&q){
//     int n=q.size();
//     for(int i=0; i<n; i++){
//         int el=q.front();
//         cout<<el<<" ";
//         q.pop();
//         q.push(el);
//     }
//     cout<<endl;
// }

// void reverseKelementsOfQueue(queue<int>&q,int k){
//     stack<int>st;
//     // Step 1: Push first k elements into stack
//     for(int i=0; i<k; i++){
//         int el=q.front();
//         st.push(el);
//         q.pop();
//     }

//     // Step 2: Store remaining elements in another queue
//     queue<int>q2;
//     while(q.size()>0){
//         int el=q.front();
//         q2.push(el);
//         q.pop();
//     }

//     // Step 3: Push elements from stack (reversed k elements) back to queue
//     while(st.size()>0){
//         int el=st.top();
//         q.push(el);
//         st.pop();
//     }

//     // Step 4: Push remaining elements back to queue
//     while(q2.size()>0){
//         int el=q2.front();
//         q.push(el);
//         q2.pop();
//     }
//     displayQueue(q);
    
// }

// int main(){
//     queue<int>q;
//     int k;
//     cout<<"enter how may numers u want to reverse: ";
//     cin>>k;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     q.push(60);
//     displayQueue(q);
//     reverseKelementsOfQueue(q,k);
// }

//Method 2
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void displayQueue(queue<int>&q){
    int n=q.size();
    for(int i=0; i<n; i++){
        int el=q.front();
        cout<<el<<" ";
        q.pop();
        q.push(el);
    }
    cout<<endl;
}

void reverseKelementsOfQueue(queue<int>&q,int k){
    stack<int>st;
    // Step 1: Push first k elements into stack
    for(int i=0; i<k; i++){
        st.push(q.front());
        q.pop();
    }

    // Step 2: Push elements from stack (reversed k elements) back to queue
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    // Step 3: pop() remaining elements and again push into the same queue
    int n=q.size();
    for(int i=0; i<n-k; i++){
        q.push(q.front());
        q.pop();
    }

    displayQueue(q);    
}

int main(){
    queue<int>q;
    int k;
    cout<<"enter how may numers u want to reverse: ";
    cin>>k;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    displayQueue(q);
    reverseKelementsOfQueue(q,k);
}