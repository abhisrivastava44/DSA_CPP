#include<iostream>
using namespace std;

int main()
{
    int a[3]={1,2,2};
    int sum=0;
    

    for(int i=0; i<=2; i++)
    {
        sum=0;
        for(int j=i; j<=2; j++)
        {
           
            sum=sum+a[j];
            cout<<sum<<endl;
             
        }
        
    }



    return 0;
}