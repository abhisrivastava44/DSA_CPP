#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string: ";
    getline(cin,str);
    
    int i=0,count=0;
    while( str[i]!='\0')
    {
        if( str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E' || str[i]=='i' || str[i]=='I' || str[i]=='o' || str[i]=='O' || str[i]=='u' || str[i]=='U')
        {
            count++;
        }
        i++;

    }

    cout<<"number of vowels= "<<count;
}