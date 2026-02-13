#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x=12345;
    string str=to_string(x);
    int length=str.length();
    cout<<"lenth of number is "<<length;
}