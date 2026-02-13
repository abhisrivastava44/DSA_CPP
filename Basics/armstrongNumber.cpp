#include<iostream>
using namespace std;

int main()
{
    int n,s=0,p;
    cout<<"enter n: ";
    cin>>n;

    int y=n;

    while( n!=0 )
    {
        p=n%10;
        s=s+(p*p*p);
        n=n/10;
    }

    if( s==y )
      cout<<"armstrong";

    else
      cout<<"not";

    


 return 0;
}