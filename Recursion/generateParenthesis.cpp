#include<iostream>
#include<string>
using namespace std;
void parenthesis(string s,int open,int close, int n){
    if(close==n){
        cout<<s<<endl;
        return;
    }
    if(open<n)         parenthesis(s+'(',open+1,close,n);
    if(close<open)         parenthesis(s+')',open,close+1,n);
}

int main(){
    int n=3;
    parenthesis("",0,0,n);
}