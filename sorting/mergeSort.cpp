#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a, vector<int> &b, vector<int> &res){       //to usnderstand this function see question of "merge two sorted arrays"--leetcode 88
    int i=0;    //for a
    int j=0;    //for b
    int k=0;    //for res
    while(i<a.size() && j<b.size()){ 
        if(a[i]<=b[j])       res[k++]=a[i++];
        else                res[k++]=b[j++];    
    }

    if(i==a.size())
        while(j<b.size())       res[k++]=b[j++];

    if(j==b.size())
        while(i<a.size())       res[k++]=a[i++]; 
}

void mergeSort(vector<int> &v){
    int n=v.size();
    if(n==1)        return;
    int n1=n/2, n2=n-n/2;       //to dive the given array into two parts
    vector<int> a(n1),b(n2);    //declaring two vectors at same time as like we do (int m,n)

    for(int i=0; i<n1; i++)         a[i]=v[i];          //copying the elements 
    for(int i=0; i<n2; i++)         b[i]=v[i+n1];

    //recursion ka magic
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);       //merging two arrays
    a.clear();
    b.clear();
}

int main(){
    int a[]={5,1,3,0,4,9,6};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);   //copying the elements of a into v
    for(int i=0; i<v.size(); i++)       
        cout<<v[i]<<" ";

    cout<<endl;
    mergeSort(v);
    for(int i=0; i<v.size(); i++)       
        cout<<v[i]<<" ";

}