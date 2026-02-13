#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int a[]={1,2,3,3,4,5};
    // for(int ele : a)
    // {
    //     cout<<ele<<" ";
    // }

    vector<int> v(6);
        
    for(int i=0; i<6; i++)
    {
        v[i]=a[i];
    }

    for(int ele : v)
    {
        cout<<ele<<" ";
    }
}