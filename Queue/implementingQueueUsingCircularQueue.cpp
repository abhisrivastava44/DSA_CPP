#include<iostream>
#include<vector>
using namespace std;

class Queue{
public:
    int f;
    int b;
    int s;  //repesents size
    vector<int>arr;
    Queue(int size){
        f=0;
        b=0;
        s=0;
        vector<int> v(size);
        arr=v;
    }

    void display(){
        if(b-f==0){
            cout<<"queue is empty"<<endl;
            return;
        }

        for(int i=f; i<b; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void push(int value){
        if(b==arr.size()){
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[b]=value;
        b++;
        s++;
    }

    void pop(){
        if(s==0){
            cout<<"queue is empty"<<endl;
            return;
        }
        f++;
        s--;
    }

    void size(){
        cout<<"the size of the queue is: "<<s<<endl;
    }

    void front(){
        if(s==0){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<arr[f]<<endl;
    }

    void back(){
        if(s==0){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<arr[b-1]<<endl;
    }

    bool empty(){
        if(s==0)   return true;
        else                return false;
    }
};

int main(){
    int n;
    cout<<"enter the size of array: "<<endl;
    cin>>n;
    Queue q(n);
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(60);
    q.display();
    q.pop();
    q.display();
    q.size();
    q.front();
    q.back();
    q.empty();
}