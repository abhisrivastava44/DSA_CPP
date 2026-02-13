//Method 1

// #include<iostream>
// using namespace std;

// int countSetBits(int n){
//     return __builtin_popcount(n);
// }

// int main(){
//     cout<<countSetBits(13);
//     return 0;
// }

//Method 2
#include<iostream>
using namespace std;

int countSetBits(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n & (n-1));
    }
    return count;
}

int main(){
    cout<<countSetBits(453);
    return 0;
}
