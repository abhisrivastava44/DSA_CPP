#include<iostream>
using namespace std;
int hcf(int a,int b){
    if(a==0)    return b;
    else return hcf(b%a,a);
}

int main(){
    int a=1000;
    int b=1001;
    cout<<hcf(b,a);
}