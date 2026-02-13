#include<iostream>
using namespace std;

//method 1 = linear search
// int main()
// {
//     int a[9]={1,2,4,5,9,15,18,21,24};
//     int n=9;
//     int x=20;
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]>x)
//         {
//             cout<<"lower bound: "<<a[i-1];
//             break;
//         }
//     }

//     cout<<endl;

    
//     for(int i=0; i<n; i++)
//     {
//         if(a[i]>x)
//         {
//             cout<<"upper bound: "<<a[i];
//             break;
//         }
//     }
// }


//method 2 = linear search
int main()
{
    int a[9]={1,2,4,5,9,15,18,21,24};
    int n=9;
    int x=20;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x)
        {
            flag=true;
            cout<<a[mid-1];
            break;
        }     

        else if(a[mid]>x)       r=mid-1;
        else if(a[mid]<x)       l=mid+1;  
    }

    if(flag==false)     cout<<a[r];


}