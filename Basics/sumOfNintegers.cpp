#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"enter the value of n: ";
    cin>>n;

    for(i=1; i<=n; i++)
      sum=sum+i;

    cout<<sum<<" is the sum.";

    return 0;
}