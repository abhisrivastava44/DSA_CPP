#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string str;
    getline(cin,str);
    int count=0;

    for(int i=0; i<str.length(); i++)
    {
        if(str.length()==1) break; //count will be 0
        else if( str.length()==1 && str[0]!=str[1])     count=1;
        else if(i==0 && str[i]!=str[i+1])    count++;       
        else if(i==str.length()-1 && str[i]!=str[i-1])   count++;
        else if(str[i]!=str[i+1] && str[i]!=str[i-1])    count++;
    }

    cout<<"number of different neighbouring characters are: "<<count;
}