#include<iostream>
#include<vector>
using namespace std;

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

    vector <int> v2(v.size());

    for(int i=v.size()-1; i>=0; i--)
    {
        v2[i]=v[i];
        cout<<v2[i]<<" ";
    }
    
}