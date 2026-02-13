#include<iostream>
#include<climits>
using namespace std;
int main(){
    int a[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(a)/sizeof(a[0]);
    int k=3;
    int maximumSum=INT_MIN;
    int maximumIndex=0;
    int prevSum=0;
    for(int i=0; i<k; i++){ //step1=find the sum of 1st window
        prevSum+=a[i];
    }
    
    maximumSum=prevSum;     //sliding window algorithm
    int i=1;    //1st index of 2nd window i.e current window
    int j=k;    //last index of2nd window i.e current window
    while(j<n){
        int currentSum=prevSum+a[j]-a[i-1];
        if(maximumSum<currentSum){
            maximumSum=currentSum;
            maximumIndex=i;
        }
        prevSum=currentSum;
        i++;
        j++;
    }
    cout<<"maximum sum of possible subarray of size k=3 is: "<<maximumSum;
    cout<<"the window/subarray of maximum sum starts from index:  "<<maximumIndex;
}
