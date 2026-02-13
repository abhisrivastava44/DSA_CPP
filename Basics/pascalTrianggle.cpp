#include<iostream>
using namespace std;

int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
    {
        f=f*i;

    }
    return f;
}

int combination(int n,int r)
{
    int result;
    result= ( fact(n) ) / (( fact(r) ) *( fact(n-r) ));
    return result;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout<<" ";
        }

        for(int j=0; j<=i; j++)
        {
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}