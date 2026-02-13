#include<iostream>
using namespace std;

int main()
{
    int n,s=0,p;
    cout<<"enter n: ";
    cin>>n;

    while( n!=0 )
    {
        p=n%10;
        s=(s*10)+p;
        n=n/10;
    }

    cout<<"reverse number is: "<<s;



 return 0;
}