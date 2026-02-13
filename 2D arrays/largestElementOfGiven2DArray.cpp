#include<iostream>
#include<climits>
using namespace std;


int main()
{
    int row,column;
    cout<<"enter the number of rows and columns: ";
    cin>>row>>column;

    cout<<"enter the elements: ";
    int a[row][column];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            cin>>a[i][j];
        }          
    }

    cout<<endl;    

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
             cout<<a[i][j]<<" ";
        }
               
        cout<<endl;
    }

    cout<<endl;    

    int max=INT_MIN;
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            if( a[i][j] > max )
            {
                max=a[i][j];
            }
        }
    }

    cout<<"maximum element is: "<<max;

    return 0;
}