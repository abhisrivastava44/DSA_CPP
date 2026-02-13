#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={10,20,-4,5,18,24,1,-7,56};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int>q;   //maxHeapp
    for(int i=0; i<n; i++){
        q.push(arr[i]);
        if(q.size()>k)  q.pop();
    }

    cout<<q.top(); //element at the top will be the kth smallest element
}
