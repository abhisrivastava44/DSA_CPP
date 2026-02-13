#include<iostream>
#include<string.h>
#include<queue>
using namespace std;

int removingDigits(int n){

    int count=0;
    while(n>0){
        string temp=to_string(n);
        priority_queue<int>q;

        int i=0;
        while(temp[i]!='\0'){
            q.push(temp[i]-'0');
            i++;
        }
    
        int x=q.top();
        q.pop();

        n=n-x;
        count++;
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;

    cout<<removingDigits(n);
}