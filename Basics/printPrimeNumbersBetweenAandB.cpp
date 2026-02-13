#include<iostream>
using namespace std;

int main()
{
    int a,b,i,j;
    cout<<"enter the values of a and b: ";
    cin>>a>>b;

    for(i=a; i<=b; i++)
    {
        for(j=2; j<=i; j++)
        {
            if( i%j==0)
               break;

        }
         
        if(i==j)
          cout<<i<<endl;

        

    }






    return 0;
}