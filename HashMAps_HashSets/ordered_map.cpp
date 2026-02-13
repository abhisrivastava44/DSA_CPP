#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int>m;
    m[2]=30;
    m[1]=20;
    m[3]=10;
    for(auto ele:m)
        cout<<ele.first<<" ";

    cout<<endl;
    map<string,int>m2;
    m2["raghav"]=30;
    m2["harsh"]=20;
    m2["sanket"]=10;
    for(auto ele:m2)
        cout<<ele.first<<" ";
}