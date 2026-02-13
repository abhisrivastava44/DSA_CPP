#include<iostream>
#include<queue>
using namespace std;

int main(){
    int arr[]={6,5,3,2,8,10,9};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>q;
    for(int i=0; i<n; i++){
        q.push(arr[i]);
        if(q.size()>k){
            ans.push_back(q.top());
            q.pop();
        }
    }

    while(q.size()>0){  //heap m jo element bach gya usko bhi sorted manner m answer array m daalo 
        ans.push_back(q.top());
        q.pop();
    }
    
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}