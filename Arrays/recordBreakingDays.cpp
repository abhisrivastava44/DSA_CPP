#include<iostream>
using namespace std;



int main()
{
    int n;
    cout<<"enter the size of array/ no. of days: ";
    cin>>n;
    
    int a[n];
    cout<<"enter the no. of visitors in an array: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if( a[i]>a[i+1] && a[i]>a[i-1] )
        {
            cout<<a[i]<<endl;
        }
    }





    return 0;
}





