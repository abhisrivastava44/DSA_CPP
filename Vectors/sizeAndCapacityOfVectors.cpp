#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector <int> v;
    // v.push_back(6);
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // cout<<v.size()<<endl;
    // v.push_back(9);
    // cout<<v.size()<<endl;
    // v.push_back(0);
    // cout<<v.size()<<endl;

    vector <int> v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(0);
    cout<<v.capacity()<<endl;
}