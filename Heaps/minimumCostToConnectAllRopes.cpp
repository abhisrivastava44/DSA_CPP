#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={6,5,3,2,8,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minimumCost=0;
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0; i<n; i++){
        q.push(arr[i]);
    }

    while(q.size()>1){
        int x=q.top();
        q.pop();
        int y=q.top();
        q.pop();

        q.push(x+y);
        minimumCost += (x+y);
    }
    cout<<minimumCost;
}