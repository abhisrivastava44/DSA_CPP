#include<iostream>
using namespace std;
#include<limits.h>

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    
    int a[n];
    cout<<"enter the elements of array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    //declare a large array of large size
    const int N=1e6+2;
    int b[N];
    for(int i=0; i<N; i++)
    {
        b[i] = 0;
    }

    int minindex=INT_MAX;

    for(int i=0; i<n; i++)
    {
        if( b[ a[i] ] != 0 )
        {
            minindex= min( minindex , b[ a[i] ] );
        }

        else
        {
            b[ a[i] ]= i;
        }
    }

    if( minindex == INT_MAX )
    {
        cout<<"there is no duplicate element."<<endl;
    }

    else
    {
        cout<<minindex+1<<endl;

    }




    return 0;
}