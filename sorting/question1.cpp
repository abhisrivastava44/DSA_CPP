#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[10] = {10, -879, 102, 4, -7944, 478, 0, 12, -784, 12};
    
    for(int i=0; i<=9; i++)
    {
        int max=INT_MIN;
        int maxindex=-1;
        for(int j=i; j<=9; j++)
        {
            if( arr[j]>max )
            {
                max=arr[j];
                maxindex=j;
            }

            int temp=arr[maxindex];
            arr[maxindex]=arr[i];
            arr[i]=temp;
        }
    }

    for(int i=0; i<=9; i++)
    {
        cout<<arr[i]<<" ";
    }
  
}