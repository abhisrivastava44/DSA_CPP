#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str="AZYZXBDJKX";
    cout<<"original string= "<<str<<endl;

    string s;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]>='X')
            s.push_back(str[i]);
    }
    cout<<"string greater than value X= "<<s<<endl;

    cout<<"after sorting in decreasing order: ";
    sort(s.begin(),s.end());
    reverse(s.begin(),s.end());
    cout<<s;
    


}
