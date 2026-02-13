#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int row;
    cout<<"enter the number of rows: ";
    cin>>row;

    for(i=1; i<=row; i++)
    {
        int p=1;
        for(j=1; j<=i; j++)
        {
            cout<<p<<" ";
            p+=2; 
        }
        cout<<"\n";
    }
    return 0;
}

