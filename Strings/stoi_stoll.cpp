#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string str[]={"0123","0023","456","00182","940","2901"};
    int max=stoi(str[0]);
    for(int i=1; i<=5; i++)
    {
        int x=stoi(str[i]);
        if(x>max)       max=x;
    }
    cout<<"maximum element is: "<<max;


}