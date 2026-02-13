#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void firstNegativeInWindow(int arr[],int n,int k){
    vector<int>answer;
    queue<int>q;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            q.push(i);
        }
    }

    for(int i=0; i<n-k+1; i++){
        while(!q.empty() && q.front()<i){ // remove indices that are out of this window
            q.pop();
        }

        if(!q.empty() && q.front()<=i+k-1){ // check whether the first negative lies in this window
                answer.push_back(arr[q.front()]);
        }
        else{
                answer.push_back(0);
        }
        
    }
    
    for(int i=0; i<n; i++){ //original array
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<answer.size(); i++){ // print the answer
        cout<<answer[i]<<" ";
    }
}

int main(){
    int arr[]={3,-4,-7,30,7,-9,2,1,6,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    firstNegativeInWindow(arr,n,k);
}