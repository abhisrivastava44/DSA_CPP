#include<iostream>
using namespace std;

int sum(int n)
{
    int sum=0;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }

    return sum;
}

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    cout<<"the sum is: "<<sum(n);

    return 0;


}