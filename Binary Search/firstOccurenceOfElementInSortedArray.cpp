#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,2,3,3,3,3,3,4,4,5,8,9};
    int x=6;
    int n=13;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==x)       
        {
            if(a[mid-1]==x)     r=mid-1;
            else if((a[mid]-1)!=x)      
            {
                flag=true;
                cout<<"first occurence of x is at index: "<<mid;
                break;
            }
        }

        else if(a[mid]>x)       r=mid-1;
        else if(a[mid]<x)       l=mid+1;
    }

    if(flag==false)     cout<<-1;
}