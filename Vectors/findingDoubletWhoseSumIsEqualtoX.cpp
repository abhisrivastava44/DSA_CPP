#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);
    v.push_back(8);
    for(int i=0; i<v.size(); i++)
         cout<<v[i]<<" ";

     cout<<endl;

     int totalpairs=0;
     int x=12;

     for(int i=0; i<v.size(); i++)
     {
        for(int j=i+1; j<v.size(); j++)
        {
            if( v[i]+v[j]==x )
            {
                totalpairs++;
                cout<<v[i]<<","<<v[j]<<endl;
            }
        }
     }

     cout<<"total pairs is: "<<totalpairs;


}