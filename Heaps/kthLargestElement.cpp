#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={10,200,-4,6,18,2,105,118};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0; i<n; i++){
        q.push(arr[i]);
        if(q.size()>k)  q.pop();
    }

    cout<<q.top();
}