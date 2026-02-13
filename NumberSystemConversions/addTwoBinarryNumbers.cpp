#include<iostream>
using namespace std;

int addBinary(int a,int b)
{
    int ans=0;
    int previousCarry=0;

    while( a>0 && b>0 )
    {
        if( a%2==0 && b%2==0 )
        { 
            ans= (ans*10) + previousCarry;
            previousCarry=0; 
        }

        else if( (a%2==0 && b%2==1) || (a%2==1 && b%2==0) )
        {
            if( previousCarry==1 )
            {
                ans= (ans*10) + 0;
                previousCarry=1;
            }

            else
            {
                ans= (ans*10) + 1;
                previousCarry=0;
            }
        }

        else
        {
            ans= (ans*10) + previousCarry;
            previousCarry=1;
        }

        a/=10;
        b/=10;
    }

    while( a>0 )
    {
        if( previousCarry==1 )
        {
            if( a%2==1 )
            {
                 ans= (ans*10) + 0;
                 previousCarry=1;
            }

            else
            {
                ans= (ans*10) + 1;
                previousCarry=0;
            }

            
           
        }

        else
        {
            ans= (ans*10) + 1;
            previousCarry=1;
        }
    }
}
int main()
{
    int a,b;
    cout<<"enter two binary numbers: ";
    cin>>a>>b;

    cout<<addBinary(a,b)<<endl;
}