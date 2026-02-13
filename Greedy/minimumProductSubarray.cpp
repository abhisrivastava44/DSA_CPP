#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<climits>
using namespace std;

int minimumProductSubarray(vector<int>&v){
    int negativeCount=0;
    int positiveCount=0;
    int zeroCount=0;

    int positivePoduct=1;
    int negativeProduct=1;

    int largestNegative=INT_MIN;

    for(int i=0; i<v.size(); i++){

        if(v[i]<0){
            negativeCount++;
            negativeProduct*=v[i];

            largestNegative=max(largestNegative,v[i]);
        }  

        if(v[i]>0){
            positiveCount++;
            positivePoduct*=v[i];
        }  
        if(v[i]==0)  zeroCount++;
    }

    int minimumProduct=1;
    //Case 1: when all the numbers in the vector are positive and 0 is not present
    if(positiveCount==v.size()){
        minimumProduct=*min_element(v.begin(),v.end());
    }

    //Case 2: when all the numbers in the vector are positive and 0 is present
    else if(negativeCount==0 && zeroCount>0){
        minimumProduct=0;
    }

    //case 3: if odd number of negative numbers present
    else if(negativeCount%2!=0){
        minimumProduct=positivePoduct*negativeProduct;
    }

    //case 3: if even number of negative numbers present
    else{   //negativeCount%2!=0
        minimumProduct= (positivePoduct*negativeProduct)/largestNegative;
    }

    return minimumProduct;
}

int main(){
    vector<int> v ={1,2,3};
    cout<<minimumProductSubarray(v);
}