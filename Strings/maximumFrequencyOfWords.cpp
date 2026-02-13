#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string str="my name is abhi srivastava. my favourite is colour is green.";
    stringstream ss(str);
    string temp;
    vector<string> v;

    while(ss>>temp)
    {
        v.push_back(temp);
    }

    cout<<endl;
    sort(v.begin(),v.end());

    int max=0;
    for(int i=0; i<v.size(); i++)
    {
        string ch=v[i];
        int count=1;
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[j]==v[i])      count++;
            if(count>max)       max=count;
        }
    }

    for(int i=0; i<v.size(); i++)
    {
        string ch=v[i];
        int count=1;
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[j]==v[i])      count++;
            
        }
        if(count==max)       cout<<v[i]<<"="<<max<<endl;
    }

    
}