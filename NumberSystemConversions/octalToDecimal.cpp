#include<iostream>
using namespace std;
#include<math.h>


int octalToDecimal(int n)
{
    int ans=0,r,i=0;
   
    while( n!=0 )
    {
        r=n%10;
        ans=ans+(r*pow(8,i));
        i++;
        n=n/10;
    }

    

    cout<<"number in decimal is: "<<ans;

    
    return 0; 
}



int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

    octalToDecimal(n);
    
return 0;

}