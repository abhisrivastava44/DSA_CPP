#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of array: ";
    char ch[500];
    int size;
    cin>>size;
    cout<<"Enter alphabet: ";
    for(int i=0;i<size;i++){
        cin>>ch[i];
    }
    for(int i=0;i<size-1;i++){
        int index = i;
        bool swapped = 0;
        for(int j=i+1;j<size;j++){
            if(ch[j]<ch[index]){
                index = j;
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
         swap(ch[index],ch[i]);
}
}