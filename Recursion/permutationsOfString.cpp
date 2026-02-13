#include<iostream>
#include<string>
using namespace std;
void permutations(string answer, string original){
    if(original==""){
        cout<<answer<<endl;
        return;
    }
    for(int i=0; i<original.length(); i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutations(answer+ch,left+right);
    }
}

int main(){
    string str="abc";
    permutations("",str);
}