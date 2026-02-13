#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"enter the value of n: ";
    cin>>n;

    for(i=2; i<=n; i++)
    {
        if( n%i==0 )
          {
             break;
          }

        
        
    }

    if( i==n )
          cout<<"prime.";

        else
           cout<<"not prime.";





    return 0;
}