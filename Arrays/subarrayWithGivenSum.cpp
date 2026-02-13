#include<iostream>
using namespace std;

int main()
{
    int target=12;
    int n;
    cout<<"enter thee size of array: ";
    cin>>n;

    int a[n];

    cout<<"enter the array: ";
    for(int i=0; i<=n; i++)
    {
        cin>>a[i];
    }

    int i=0;
    int j=n-1;

    while(i<j)
    {
        if( a[i] + a[j] == target)
        {
            cout<<"array is found at index "<<i+1<<" and "<<j;
            break;
        }

        else if(a[i] + a[j] > target)
        {
            j--;
            
        }

        else if( a[i] + a[j] < target)
        {
            i++;
        }


    }






    return 0;
}