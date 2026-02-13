#include<iostream>
using namespace std;
#include<limits.h>

int main()
{
    int a[8]={2,1,5,9,7,3};
    int n;

    cout<<"enter the term upto which u find the maximum:  ";
    cin>>n;

    int max=INT_MIN;
    for(int i=0; i<=n-1; i++)
    {
        if( a[i]>max )
           max=a[i];
    }

    cout<<"maximum number till "<<n<<"th term is"<<max;





    return 0;
}