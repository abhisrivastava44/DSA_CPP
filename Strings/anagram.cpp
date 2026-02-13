#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"enter 1st string: ";
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());

    cout<<"enter 2nd string: ";
    string t;
    getline(cin,t);
    sort(t.begin(),t.end());

    if(s==t)    cout<<"YES";
    else        cout<<"FALSE";
       



}