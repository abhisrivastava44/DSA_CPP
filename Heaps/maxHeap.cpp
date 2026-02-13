#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int,vector<int>,greater<int>>q;
    q.push(10);
    q.push(2);
    q.push(-6);
    q.push(81);
    cout<<q.top()<<endl;
    q.pop();
    cout<<q.top();
}
