#include<iostream>
using namespace std;

void permutations(string input,string output){
    if(input.size()==0){
        cout<<output<<"\n";
        return;
    }

    for(int i=0; i<input.size(); i++){
        char ch=input[i];
        string left=input.substr(0,i);  //returns the susstring from index 0 to i-1
        string right=input.substr(i+1); //returns the substring from i+1 to last
        string restOfString=left+right;
        permutations(restOfString,output+ch);
    }
}

int main(){
    permutations("abc","");
    return 0;
}