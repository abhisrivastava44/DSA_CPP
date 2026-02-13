#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minCostToBreakGrid(int m, int n, vector<int>&vertical, vector<int>&horizontal){
    sort(vertical.begin(),vertical.end());
    reverse(vertical.begin(),vertical.end());

    sort(horizontal.begin(),horizontal.end());
    reverse(horizontal.begin(),horizontal.end());

    int horizontalBlockCount=1;
    int verticalBlockCount=1;

    int h=0;
    int v=0;
    int answer=0;

    while(v<vertical.size() && h<horizontal.size()){
        if(vertical[v]>horizontal[h]){
            answer+=vertical[v]*verticalBlockCount;
            horizontalBlockCount++;
            v++;
        }
        else{
            answer+=horizontal[h]*horizontalBlockCount;
            verticalBlockCount++;
            h++;
        }
    }

    while(v<vertical.size()){
        answer+=vertical[v]*verticalBlockCount;
        horizontalBlockCount++;
        v++;
    }

    while(h<horizontal.size()){
        answer+=horizontal[h]*horizontalBlockCount;
        verticalBlockCount++;
        h++;
    }
    return answer;
}

int main(){
    int m,n;
    cin>>m>>n;

    vector<int> horizontal;
    vector<int> vertical;
    for(int i=0; i<m-1; i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }

    for(int i=0; i<n-1; i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }

    cout<<minCostToBreakGrid(m,n,vertical,horizontal);
}