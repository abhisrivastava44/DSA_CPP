#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int a[]={19,12,23,8,16};
    int n=5;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
    vector<int> v(n,0);
    int x=0;

    for(int i=0; i<n; i++)
    {
        int min=INT_MAX;
        int minimumIndex=-1;
        for(int j=0; j<n; j++)
        {
            if(v[j]==1)     continue;
            else
            {
                if(min>a[j])
                {
                    min=a[j];
                    minimumIndex=j;
                }
            }
        }

        a[minimumIndex]=x;
        v[minimumIndex]=1;
        x++;
    }

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
    
}