#include<iostream>
using namespace std;


int triplet(int x,int y,int z)
{
    int a,b,c;
    a=max(x, max(y,z));
    
    if(a==x)
    {
        b=y;
        c=z;
    }

    else if(a==y)
    {
        b=x;
        c=z;
    }

    else{
        b=x;
        c=y;
    }

    if( a*a == (b*b)+(c*c) )
       cout<<"It is triplet.";

    else
       cout<<"It is not a triplet.";

       return 0;


    


    
    
}


int main()
{
    int x,y,z;
    cout<<"enter the values of x,y,z: ";
    cin>>x>>y>>z;

    triplet(x,y,z);







    return 0;
}