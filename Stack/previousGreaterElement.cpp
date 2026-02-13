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
    int previousGreaterElement[n];
    

    stack<int>st;
    previousGreaterElement[0]=-1;
    st.push(arr[0]);
    for(int i=1; i<=n; i++){
        //pop all the elements smaller than arrr[i]
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //now mark the answer in the nextGreaterElement array
        if(st.size()==0)    previousGreaterElement[i]=-1;
        else                previousGreaterElement[i]=st.top();
        //now puah arr[i] in the stack
        st.push(arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<previousGreaterElement[i]<<" ";
    }
    cout<<endl;
}