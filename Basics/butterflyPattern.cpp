#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;

/*   METHOD 1: MY METHOD


    int nst=1;
    int nsp=2*n-2;

    for(int i=1; i<=n; i++)
    {

      if(i==n)
      {
        for(int m=1; m<=2*n; m++)
        {
          cout<<"*";;
        }
       
      }

      else
      {
         for(int j=1; j<=nst; j++)
        {
              cout<<"*";
        }

      for(int k=1; k<=nsp; k++)
        {
              cout<<" ";
        }

      for(int l=1; l<=nst; l++)
        {
              cout<<"*";
        }

      nst+=1;
      nsp-=2;

        
        cout<<endl;
       

      }
        
    }

    cout<<endl;

    

    int nst2=n-1;
    int nsp2=2;





    for(int i=n+1; i<=2*n; i++)
    {
      if(i==n+1)
      {
        for(int m=1; m<=2*n; m++)
        {
            cout<<"*";
        }
       cout<<endl;
      }

      else
      {
        for(int j=1; j<=nst2; j++)
        {
          cout<<"*";

        }


        for(int k=1; k<=nsp2; k++)
        {
          cout<<" ";
        }

        for(int l=1; l<=nst2; l++)
        {
           cout<<"*";

        }

        nst2-=1;
        nsp2+=2;

         cout<<endl;
      }

     

    }
    
*/

//METHOD 2: APNA COLLEGE METHOD

for(int i=1; i<=n; i++)
{
  for(int j=1; j<=i; j++)
  {
    cout<<"*";
  }

  int space=2*n-2*i;
  for(int j=1; j<=space; j++)
  {
    cout<<" ";
  }

  for(int j=1; j<=i; j++)
  {
    cout<<"*";
  }
  cout<<endl;
}


for(int i=n; i>=1; i--)
{
  for(int j=1; j<=i; j++)
  {
    cout<<"*";
  }

  int space=2*n-2*i;
  for(int j=1; j<=space; j++)
  {
    cout<<" ";
  }

  for(int j=1; j<=i; j++)
  {
    cout<<"*";
  }
  cout<<endl;
}

    return 0;
}