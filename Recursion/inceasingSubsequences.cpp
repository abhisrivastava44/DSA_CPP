#include<iostream>
#include<string>
#include<vector>
using namespace std;
//this code is almost same as subset waala code
void printSubset(int a[],int n,int index,vector<int> answer,int k)
{
    if(index==n)
    {
        if(answer.size()==k)
        {
            for(int i=0; i<answer.size(); i++){
                cout<<answer[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(answer.size()+(n-index) < k)     return; //iss line k bina bhi code chalega but this line helps to improv ethe time complexity
    printSubset(a,n,index+1,answer,k);
    answer.push_back(a[index]);
    printSubset(a,n,index+1,answer,k);

}

int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v;
    int k=3;
    printSubset(a,n,0,v,k);
}