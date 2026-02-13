#include<iostream>
#include<climits>
using namespace std;
float max(float a,float b)
{
    if(a>=b)    return a;
    else        return b;
}

float min(float a,float b)
{
    if(a<b)     return a;
    else        return b;
}

int main()
{
    int a[]={5,3,10};
    int n=3;
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
    
    float kMin=(float)INT_MIN;
    float kMax=(float)INT_MAX;
    bool flag=true;
    for(int i=0; i<n-1; i++)
    {
        if(a[i]-a[i+1]>=0)      kMin=max(kMin,(a[i]+a[i+1])/2.0);
        else                    kMax=min(kMax,(a[i]+a[i+1])/2.0);

        if(kMin>kMax)
        {
            flag=false;
            break;
        }
    }

    if(flag==false)     cout<<-1;

    else if(kMin==kMax)
    {
        if(kMin-(int)kMin==0)       //both kMin and kMax are integers
            cout<<"there is only one value of k: "<<kMin;

        else cout<<-1;
    }
    else        
    {
        if(kMin-(int)kMin)      kMin=(int)kMin+1;
        cout<<"range of k is: ["<<kMin<<","<<(int)kMax<<"]";
    }

}