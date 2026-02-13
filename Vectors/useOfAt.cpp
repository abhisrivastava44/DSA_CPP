#include<iostream>
#include<vector>
using namespace std;

int main()
{
   vector <int> v;
   v.push_back(9);
   v.push_back(10);
   v.push_back(1);
   v.push_back(6);

   cout<<v.at(2)<<endl;
   v.at(2)=90;
   cout<<v.at(2);
}