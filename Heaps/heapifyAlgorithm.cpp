#include<iostream>
using namespace std;

void heapify(int i,int arr[],int n){
    while(true){
        int leftChild=2*i;
        int rightChild=2*i+1;
        if(leftChild>=n)    break;
        if(rightChild>=n){
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
            else    break;
        }
    }
}

void print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={-1,10,2,14,11,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,n);
    for(int i=n/2; i>=1; i--){
        heapify(i,arr,n);
    }
    print(arr,n);
}