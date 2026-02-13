#include<iostream>
using namespace std;
#include<math.h>


int decimalToBinary(int n)
{
    int a[30],i=0;
   
    while( n!=0 )
    {
        a[i]=n%2;
        i++;
        n=n/2;
    }

    a[i]='\0';

    cout<<"number in binary is: ";

    for(i=i-1; i>=0; i--)
       cout<<a[i];


    return 0; 
}



int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    int ans=decimalToBinary(n);
    
return ans;

}