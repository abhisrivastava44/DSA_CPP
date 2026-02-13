//method 1

// #include<iostream>
// using namespace std;
// int main(){
//     int a[]={5,1,8,2,3};
//     int n=sizeof(a)/sizeof(a[0]);
//     int count=0;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++)
//             if(a[i]>a[j])       count++;
//     }
//     cout<<count;
// }

//method 2--using merge sort
#include<iostream>
#include<vector>
using namespace std;

int inversion(vector<int> &a, vector<int> &b){
    int count=0;
    int i=0;    //for a
    int j=0;    //for b
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }

        else        i++;        //a[i]<=b[i]
    }
    return count;
}
void merge(vector<int> &a, vector<int> &b, vector<int> &res){       //to usnderstand this function see question of "merge two sorted arrays"--leetcode 88
    int i=0;    //for a
    int j=0;    //for b
    int k=0;    //for res
    while(i<a.size() && j<b.size()){ 
        if(a[i]<=b[j])       res[k++]=a[i++];
        else                 res[k++]=b[j++];    
    }

    if(i==a.size())
        while(j<b.size())       res[k++]=b[j++];

    if(j==b.size())
        while(i<a.size())       res[k++]=a[i++]; 
}

int mergeSort(vector<int> &v){
    int count=0;
    int n=v.size();
    if(n==1)        return 0;
    int n1=n/2, n2=n-n/2;       //to dive the given array into two parts
    vector<int> a(n1),b(n2);    //declaring two vectors at same time as like we do (int m,n)

    for(int i=0; i<n1; i++)         a[i]=v[i];          //copying the elements 
    for(int i=0; i<n2; i++)         b[i]=v[i+n1];

    //recursion ka magic
    count+=mergeSort(a);
    count+=mergeSort(b);

    count+=inversion(a,b);      //yha bs inversion waala function cll kr lo

    merge(a,b,v);       //merging two arrays
    a.clear();
    b.clear();

    return count;
}

int main(){
    int a[]={5,1,3,0,4,9,6};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int> v(a,a+n);   //copying the elements of a into v
    for(int i=0; i<v.size(); i++)       
        cout<<v[i]<<" ";

    cout<<endl;
    cout<<mergeSort(v);

}