#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    //push
    //pop
    //front--> top
    //size, empty
    //back
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.size()<<endl;
    cout<<q.front()<<endl;    //prints the front element in the queue
    cout<<q.back()<<endl;     //prints the bcak element in the queue-->rarely used
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.size();
}