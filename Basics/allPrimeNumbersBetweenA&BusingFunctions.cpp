#include<iostream>
using namespace std;

void prime(int a,int b)
{
    for(int i=a; i<=b; i++)
    {
        int j;
        for(j=2; j<=i; j++)
        {
            if(i%j==0)
              break;
        }

        if( i==j )
           cout<<i<<endl;

       
    }
   return ;

}


int main()
{
    int a,b;
    cout<<"enter a and b: ";
    cin>>a>>b;

    prime(a,b);
    

    return 0;
}