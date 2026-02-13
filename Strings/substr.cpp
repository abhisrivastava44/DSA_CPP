#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout<<"enter a string: ";
    string str;
    getline(cin,str);
    cout<<str<<endl;
    int length=str.length();
    cout<<str.substr(length/2);
}