#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>

int decimalToHexadecimal(int n)
{
    int rem,temp,i,j=0;
    char hexa[50];

    temp=n;
    while( temp>0 )
    {
        rem=temp%16;
        if (rem<10)
           hexa[j++]=48+rem;

        else
           hexa[j++]=55+rem;

        temp=temp/16;
    }

    for(i=j-1; i>=0; i--)
    {
        cout<<hexa[i];
    }

    return 0;


}

int main()
{
    int n;
    
    cout<<"enter any decimal number: ";
    cin>>n;
    

    
    decimalToHexadecimal(n);
    
   
    return 0;
}