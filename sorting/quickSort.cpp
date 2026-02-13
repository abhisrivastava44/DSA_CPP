#include<iostream>
using namespace std;
int partition(int a[],int startingIndex,int endingIndex){
    int pivotElement=a[startingIndex];      //work1=finding pivot element and placing it at its right place
    int count=0;
    for(int i=startingIndex+1; i<= endingIndex; i++)
        if(a[i]<=pivotElement)      count++;

    int pivotIndex=count+startingIndex;
    swap(a[startingIndex],a[pivotIndex]);

    int i=startingIndex;        //work2=pivot element k left m saare chhote elements ko rskhna and right m bade numbers ko rakho
    int j=endingIndex;
    while(i<pivotIndex && j>pivotIndex){
        if(a[i]<=pivotElement)              i++;
        else if(a[j]>pivotElement)          j--;
        else if(a[i]>pivotElement   &&  a[j]<=pivotElement){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int a[],int startingIndex,int endingIndex){
    if(startingIndex>=endingIndex)          return;
    int pivotIndex=partition(a,startingIndex,endingIndex);
    quickSort(a,startingIndex,pivotIndex-1);
    quickSort(a,pivotIndex+1,endingIndex);

}

int main(){
    int a[]={5,1,8,2,7,6,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";

    cout<<endl;
    quickSort(a,0,n-1);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}
