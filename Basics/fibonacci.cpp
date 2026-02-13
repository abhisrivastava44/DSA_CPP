#include<iostream>
using namespace std;

int fibo(int a,int b,int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
         cout<<sum<<" ";
        sum=a+b;
       
        a=b;
        b=sum;


    }
    return 0;
}


int main()
{
    int a=0,b=1,n;
    cout<<"enter the number of terms: ";
    cin>>n;

    cout<<fibo(a,b,n);



    return 0;
}