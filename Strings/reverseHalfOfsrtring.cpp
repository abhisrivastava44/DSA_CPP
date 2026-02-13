#include<iostream>
#include<string>
#include<algorithm> //to use reverse
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string str;
    getline(cin,str);
    cout<<str<<endl;
    int length=str.length();
    reverse(str.begin(),str.begin()+(length/2));
    cout<<str;
    

}