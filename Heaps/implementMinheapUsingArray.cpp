#include<iostream>
using namespace std;

class minHeap{  
    public: 
    int arr[50];
    int index;

    minHeap(){
        index=1;
    }
    int top(){
        return arr[1];
    }

    int push(int x){
        arr[index]=x;

        int i=index;    //for internal rearrangement
        index++;
        while(i!=1){    //swap i with psrent till i!=1
            int parent=i/2;
            if(arr[i]<arr[parent])
                swap(arr[i],arr[parent]);
            else    break;

            i=parent;
        }
    }

    void pop(){
        index--;    //last element ko hm consider hi nhi krenge (i.e we deleted it)
        arr[1]=arr[index];

        int i=1;    //internal rearrangement
        while(true){    
            int leftChild=2*i;
            int rightChild=2*i+1;

            if(leftChild>index-1)    break;
            if(rightChild>index-1){
                if(arr[i]>arr[leftChild]){
                    swap(arr[i],arr[leftChild]);
                    i=leftChild;
                }
                break;
            }
            if(arr[leftChild]<arr[rightChild]){
                if(arr[i]>arr[leftChild]){
                    swap(arr[i],arr[leftChild]);
                    i=leftChild;
                }
                else break;
            }

            else{
                if(arr[i]>arr[rightChild]){
                    swap(arr[i],arr[rightChild]);
                    i=rightChild;
                }
                else break;
            }
        }
    }

    int size(){
        return index-1;
    }

    void display(){
        for(int i=1; i<=index-1; i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }
};

int main(){
    minHeap q; //c++ m object hm java ki tarah nhi bnaate isme hm directly "minheap q" likhenge ya '"minheap *q=new minheap"'
    q.push(10);
    q.push(20);
    cout<<q.size()<<endl;
    q.push(11);
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;
    q.push(2);
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;
    q.display();
    q.pop();
    cout<<q.top()<<endl;
    q.display();
}