#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //next greater element index array
    int previousGreaterElementIndex[n];
    

    stack<int>st;
    previousGreaterElementIndex[0]=1;
    st.push(0);
    for(int i=1; i<=n; i++){
        //pop all the elements smaller than arrr[i]
        while(st.size()>0 && arr[st.top()]<=arr[i]){
            st.pop();
        }
        //now mark the answer in the nextGreaterElement array
        if(st.size()==0)    previousGreaterElementIndex[i]=-1;
        else                previousGreaterElementIndex[i]=st.top();
        previousGreaterElementIndex[i]=i-previousGreaterElementIndex[i];
        //now puah arr[i] in the stack
        st.push(i);
    }

    for(int i=0; i<n; i++){
        cout<<previousGreaterElementIndex[i]<<" ";
    }
    cout<<endl;
}