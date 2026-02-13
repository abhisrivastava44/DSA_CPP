#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverse(vector <int> &a,int si,int ei)
{
    while(si<ei)
    {
        int temp=a[si];
        a[si]=a[ei];
        a[ei]=temp;
        si++;
        ei--;
    }
}

int main()
{
    vector <int> v;
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int k;
    cout<<"enter the steps u want to reverse: ";
    cin>>k;

    if(k>n)
      k=k%n;

    reverse(v,0,n-1);
    reverse(v,0,k-1);
    reverse(v,k,n-1);

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
}


