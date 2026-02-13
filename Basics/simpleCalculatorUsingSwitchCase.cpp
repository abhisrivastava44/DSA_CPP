#include<iostream>
using namespace std;

int main()
{
    int n;
    float x,y;
    cout<<"enter the value of x and y: ";
    cin>>x>>y;

    cout<<"enter the value of n: ";
    cin>>n;

    switch(n)
    {
        case 1:
          cout<<x+y<<" is the sum.";
          break;

        case 2:
          cout<<x-y<<" is the difference.";
          break;

        case 3:
          cout<<x*y<<" is the product.";
          break;

        case 4:
          cout<<(float)x/y<<" is the division.";
          break;          
    }




    return 0;
}