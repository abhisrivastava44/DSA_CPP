#include<iostream>
#include<queue>
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

// void removeEvenPositionElements(queue<int>q){
//     int n=q.size();
//     for(int i=0; i<n; i++){
//         if(i%2==0)  q.pop();
//         else{
//             int el=q.front();
//             q.pop();
//             q.push(el);
//         }
//     }
//     printQueueElements(q);
//     cout<<endl;
// }

void removeEvenPositionElements(queue<int>q){
    int n=q.size();
    for(int i=0; i<n; i++){
        if(i%2!=0){
            int el=q.front();
            q.push(el);
        }  
        q.pop();
    }
    printQueueElements(q);
    cout<<endl;
}

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    printQueueElements(q);
    removeEvenPositionElements(q);
}