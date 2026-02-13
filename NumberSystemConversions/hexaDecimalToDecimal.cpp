#include<iostream>
using namespace std;
#include<math.h>
#include<string.h>

void hexaDecimalToDecimal(char hexa[])
{
    int len,i,sum=0,j=0;
    len=strlen(hexa);

    for(i=len-1; i>=0; i--)
    {
        if( hexa[i]>'0'  &&  hexa[i]<='9' )
        {
            sum=sum + ( (hexa[i]-48) *pow(16,j) );
            j++;
        }

        else if ( hexa[i]>='A' &&  hexa[i]<='F' )
        {
            sum=sum + ( (hexa[i]-55) *pow(16,j) );
            j++;
        }
    }

    cout<<sum;

    return;
}

int main()
{
    char hexa[100];
    cout<<"enter any hexadecimal number: ";
    cin>>hexa;
    
    hexaDecimalToDecimal(hexa);
    
    return 0;
}