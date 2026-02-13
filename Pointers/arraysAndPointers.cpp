#include<iostream>
using namespace std;

int main()
{
    int a[]={4,2,6,1,7};
    int *ptr=a;

    for(int i=0; i<=4; i++)
    {
        cout<<*ptr<<" ";
        ptr++;

    }


    return 0;
}