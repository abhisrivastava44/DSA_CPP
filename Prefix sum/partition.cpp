#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,5,10};
    int n=sizeof(a)/sizeof(a[0]);

    for(int i=1; i<n; i++)      //formation of prefix sum
        a[i]+=a[i-1];

    int index=-1;          //check if any x exists such that array can be partioned into 2 arrays of equal sum
    for(int i=1; i<n; i++){
        if(2*a[i]==a[n-1]){
            index=i;
            break;
        }
    }
    if(index!=-1)        cout<<"yes it can be partioned at index:"<<index;
    else                cout<<"it can't be partioned";
}