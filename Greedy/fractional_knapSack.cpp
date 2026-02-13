#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//custom co,parator
bool comparator(pair<int,int>&p1 , pair<int,int>&p2 ){ //we pass two pairs of profit and weight respectively and it returns the pair with higest profit/weight ratio
    //pair<int,int> first-->profit, second -->weight
    double ratio1=(p1.first*1.0)/(p1.second*1.0);
    double ratio2=(p2.first*1.0)/(p2.second*1.0);
    return ratio1>ratio2; //agar ratio1>ratio2--.means true so, ,,ratio1 will be returned and if ratio2>ratio1--.means false so, ,,ratio2 will be returned  
}


//TC=O(nlogn)
//space=order of sorting algorithm used internally in the compiler
double fractionalKnapSack(vector<int>&profit, vector<int>&weights, int n, int w){      //n=no. of items and w=total capacity of knapsack
    vector<pair<int,int>>arr;
    for(int i=0; i<n; i++){
        arr.push_back({profit[i],weights[i]});
    }
    sort(arr.begin(),arr.end(),comparator);
    double maxProfit=0;
    for(int i=0; i<n; i++){
        if(arr[i].second <= w){     //if weight km h to item ko totally le lo
            maxProfit=arr[i].first;
            w-=arr[i].second;       //jitna knapSack k capacity ko consume kr liye h usko minus krte jaoo
        }
            
        else{       //if weight jyada h to item ka fraction part le lo
            maxProfit+=((arr[i].first*1.0)/(arr[i].second*1.0))*w; //(profit/weoght)*w
            w=0;    //hmne poore knapsack k appacity ko use kr liya h
            break;
        }
        
    }
    return maxProfit;
}

int main(){
    vector<int> profit={25,24,15};
    vector<int> weights={18,15,10};
    int w=20;
    int n=3;
    cout<<fractionalKnapSack(profit,weights,n,w)<<endl;
    return 0;
}