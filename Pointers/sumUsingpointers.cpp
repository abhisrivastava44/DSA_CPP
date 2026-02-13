#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter the value of x and y: ";
    cin>>x>>y;

    int *p=&x;
    int *q=&y;

    cout<<"sum is "<< (*p+*q);
    
    return 0;
}