#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int x;
    cout<<"enter the element whose index you want to know: ";
    cin>>x;

    vector <int> v;
    v.push_back(6);
    v.push_back(10);
    v.push_back(9);
    v.push_back(1);
    v.push_back(10);

    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";

    cout<<endl;

    int i;
    for(i=v.size()-1; i>=0; i--)
    {
        if( v[i] == x)
            break;

    }

    cout<<i<<endl;
        


}