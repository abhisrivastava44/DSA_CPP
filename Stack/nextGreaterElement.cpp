#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,7,4,6,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //next greater element
    int nextGreaterElement[n];
    // for(int i=0; i<n; i++){
    //     nextGreaterElement[i]=-1;
    //     for(int j=i+1; j<n; j++){
    //         if(arr[j]>arr[i]){
    //             nextGreaterElement[i]=arr[j];
    //             break;
    //         }
            
    //     }
    // }

    stack<int>st;
    nextGreaterElement[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        //pop all the elements smaller than arrr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //now mark the answer in the nextGreaterElement array
        if(st.size()==0)    nextGreaterElement[i]=-1;
        else                nextGreaterElement[i]=st.top();
        //now puah arr[i] in the stack
        st.push(arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<nextGreaterElement[i]<<" ";
    }
    cout<<endl;
}