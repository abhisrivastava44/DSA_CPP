#include<iostream>
using namespace std;
#include<climits>
void printMax(int a[],int n, int index, int max)
{
    if(index==n)
    {
        cout<<max;
        return;
    }
    if(a[index]>max)        max=a[index];
    printMax(a,n,index+1,max);

}
int main()
{
    int a[]={19,12,39,24,5};
    int n=sizeof(a)/sizeof(a[0]);
    printMax(a,n,0,INT_MIN);
}

