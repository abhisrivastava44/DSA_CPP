#include<iostream>
using namespace std;

int main()
{
    int i,j,row,column;
    cout<<"enter the values of row and column: ";
    cin>>row>>column;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            cout<<"*"<<" ";
        }
     

      cout<<"\n";

    }



    return 0;
}