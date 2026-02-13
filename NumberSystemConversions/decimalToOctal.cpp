#include<iostream>
using namespace std;
#include<math.h>


int decimalToOctal(int n)
{
    int a[30],i=0;
   
    while( n!=0 )
    {
        a[i]=n%8;
        i++;
        n=n/8;
    }

    a[i]='\0';

    cout<<"number in octal is: ";

    for(i=i-1; i>=0; i--)
       cout<<a[i];


    return 0; 
}



int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    int ans=decimalToOctal(n);
    
return ans;

}