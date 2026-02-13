#include<iostream>
using namespace std;

int main()
{
    int a[6]={8,9,3,4,1,2};

    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<"\n";

    for(int i=1; i<6; i++)
    {
        int current=a[i];
        int j=i-1;
        while( j>=0 && current<a[j] )
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }

    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<"  ";
    }


    return 0;
}