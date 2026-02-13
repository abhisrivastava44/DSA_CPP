#include<iostream>
using namespace std;
#include<limits.h>

int main()
{
   
    int a[6]={2,3,8,9,3,1};

    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0; i<6; i++)
    {
        if( a[i]>max )
           max=a[i];

        if( a[i]<max )
           min=a[i];
    }

    cout<<"maximum element is "<<max<<endl;

    cout<<"minimum element is "<<min;



    return 0;
}