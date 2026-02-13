#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    vector <int> v1(5);
    cout<<v1.size()<<endl;
    cout<<v1.capacity();
}