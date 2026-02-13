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

    int i=0;
    int j=v.size()-1;

    while(i<j)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;


    
}