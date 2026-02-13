#include<iostream>
#include<vector>
using namespace std;
void subArray(vector<int> v, int a[],int n, int index){
    if(index==n){
        for(int i=0; i<v.size(); i++){
            cout<<v[i];
        }
        cout<<endl;
        return;
    }
    subArray(v,a,n,index+1);
    if(v.size()==0 || a[index-1]==v[v.size()-1]){
        v.push_back(a[index]);
        subArray(v,a,n,index+1);

    }
}
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    // for(int i=0; i<n; i++){
    //     for(int k=i; k<n; k++){
    //         for(int j=i; j<=k; j++){
    //             cout<<a[j];
    //         }
    //         cout<<endl;
    //     }
    // }
    vector<int> v;
    subArray(v,a,n,0);
}