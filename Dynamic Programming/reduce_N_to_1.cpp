#include<iostream>
#include<climits>
#include<algorithm>
#include<vector>
using namespace std;

//Method 1 --> recursive solution

// int reduceNto1(int n){
//     if(n==1)    return 0;
//     if(n==2 || n==3)    return 1;
//     return 1+min({reduceNto1(n-1) , (n%2==0) ? reduceNto1(n/2) : INT_MAX , (n%3==0) ? reduceNto1(n/3) : INT_MAX});
// }

// int main(){
//     cout<<reduceNto1(7);
// }

//Method 2 --> recursion+ memoisation -->DP
// int reduceNto1(int n,vector<int>&dp){
//     if(n==1)    return 0;
//     if(n==2 || n==3)    return 1;

//     if(dp[n]!=-1)   return dp[n];
//     return dp[n]=1+min({reduceNto1(n-1,dp) , (n%2==0) ? reduceNto1(n/2 , dp) : INT_MAX , (n%3==0) ? reduceNto1(n/3 , dp) : INT_MAX});
// }

// int main(){
//     int n;
//     cout<<"enter value of n: ";
//     cin>>n;
//     cout<<endl;

//     vector<int>dp(n+1,-1);
//     cout<<reduceNto1(n,dp);
// }



//Method 3--> Tabulation Dp
int reduceNto1(int n,vector<int>&dp){
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4; i<=n; i++){
        dp[i]=1+min({dp[i-1] , (i%2==0) ? dp[i/2] : INT_MAX , (i%3==0) ? dp[i/3] : INT_MAX});
    }

    return dp[n];
}

int main(){
    int n;
    cout<<"enter value of n: ";
    cin>>n;
    cout<<endl;

    vector<int>dp(n);
    cout<<reduceNto1(n,dp);
}

