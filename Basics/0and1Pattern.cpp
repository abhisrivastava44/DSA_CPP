#include<iostream>
using namespace std;

int main()
{
    int n,constant;
    cout<<"enter n:";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        
            if(i%2!=0)
               constant=1; 

            else
                constant=0;

            for(int j=1; j<=i; j++)
            {
                cout<<constant<<" ";

                if( constant == 1)
                  constant=0;

                else
                  constant=1;
            }

            cout<<endl;

            


        
    }



    return 0;
}