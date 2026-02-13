#include<iostream>
using namespace std;
int main(){
    int a[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
    int k=3; 
    int p=-1;
    int answer[n-k+1];
    for(int i=0; i<k; i++){
        if(a[i]<0){
            p=i;
            break;
        }
    }

    if(p==-1)       answer[0]=1;
    else            answer[0]=a[p];

    int i=1;
    int j=k;
    while(j<n){
        if(p>=i)        answer[i]=a[p];
        else{
            p=-1;
            for(int x=i; x<=j; x++){
                if(a[x]<0){
                    p=x;
                    break;
                }
            }
            if(p!=-1)       answer[i]=a[p];
            else            answer[i]=1;
        }
        i++;
        j++;
    }

    for(int l=0; l<n-k+1; l++)
        cout<<answer[l]<<" ";

}