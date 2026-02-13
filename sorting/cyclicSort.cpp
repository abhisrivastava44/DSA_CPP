#include<iostream>
using namespace std;
int main(){
    int a[]={4,1,6,2,5,3};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
    //cyclic sort
    int i=0;
    while(i<n){
        int correctIndex=a[i]-1;
        if(i==correctIndex)         i++;
        else                        swap(a[i],a[correctIndex]);
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

}