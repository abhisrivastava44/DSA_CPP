#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(2);
    cout<<"size of set is: "<<s.size()<<endl;
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;

    s.erase(1);
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;

    //s.find(target)-->searches the element in the set
    //and if it is not found then returns the last element
    int target=40;
    if(s.find(target)!=s.end()){
        cout<<"exists"<<endl;
    }
    else    cout<<"dosent't exist";
}
