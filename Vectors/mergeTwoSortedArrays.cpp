#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> v, vector<int> v2)
{
    int n=v.size();
    int m=v2.size();
    vector <int> resultant(m+n);

    int i=0,j=0,k=0;
    while(i<n && j<m)
    {
        if(v[i]<v2[j])
        {
            resultant[k]=v[i];
            i++;
            k++;
        }

        else
        {
            resultant[k]=v2[j];
            j++;
            k++;
        }
    }

    if(i==n)
    {
        while(j<=m-1)
        {
            resultant[k]=v2[j];
            k++;
            j++;
        }
    }

    else if(j==m)
    {
        while(i<=n-1)
        {
            resultant[k]=v[i];
            k++;
            i++;
        }
    }

    return resultant;

}

int main()
{
    vector <int> v;
    int n;
    cout<<"enter the size of first vector: ";
    cin>>n;
    cout<<"enter the elements: ";
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    vector <int> v2;
    int n2;
    cout<<"enter the size of second vector: ";
    cin>>n2;
    cout<<"enter the elements: ";
    for(int i=0; i<n2; i++)
    {
        int y;
        cin>>y;
        v2.push_back(y);
    }
    cout<<endl;

    vector<int> resultant= merge(v,v2);   

    for(int i=0; i<resultant.size(); i++)
            cout<<resultant[i]<<" ";
}