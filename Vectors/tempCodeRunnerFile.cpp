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


    int i=0,j=n-1;
    while(i<j)
    {
        if( v[i]<0 )   i++;
        else if( v[j]>0 )  j++;

        else  if(v[i]>0 && v[j]<0 )
        {
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }

    }

    for(int i=0; i<v.size(); i++)
         cout<<v[i]<<" ";


    
}