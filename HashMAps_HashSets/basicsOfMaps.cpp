#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string,int>m;
    //Method 1
    pair<string,int>p1;
    p1.first="Abhi";
    p1.second=3;
    m.insert(p1);

    //Method 2
    m["raghav"]=2;
    m["bhagat"]=4;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"size: "<<m.size()<<endl;

    cout<<"after erasing"<<endl;
    m.erase("raghav");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"size: "<<m.size()<<endl;
}
