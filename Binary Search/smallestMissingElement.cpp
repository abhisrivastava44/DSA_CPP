#include<iostream>
using namespace std;

//method 1 = Linear search
// int main()
// {
//     int a[]={0,1,2,3,4,8,9,12};
//     for(int i=0; i<8; i++)
//     {
//         if(i!=a[i])     
//         {
//             cout<<i;
//             break;
//         }
//     }
        
    
// }


//method 2= binary search
int main()
{
    int a[]={0,1,2,3,4,8,9,12};
    int n=8;
    int l=0;
    int r=n-1;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;

        if(a[mid]==mid)     l=mid+1;
        else
        {
            ans=mid;
            r=mid-1;
        }
    }

    cout<<ans;

}