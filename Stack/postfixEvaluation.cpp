#include<iostream>
#include<stack>
using namespace std;

int solve(int value1, int value2, char ch){
    if(ch=='+')         return value1+value2;
    else if(ch=='-')         return value1-value2;
    else if(ch=='*')         return value1*value2;
    else                return value1/value2;
}

int main(){
    string str="79+4*8/3-";     //postfix expression
    cout<<str<<endl;

    stack<int> value;   //we need one stack for values -->int type

    for(int i=0; i<str.length(); i++){
        if(str[i]>=48 && str[i]<=57){       //check if str[i] is diit or not-->digits ascii value--48 to 57
            value.push(str[i]-48);
        }   

        else{                   //chaeck if s[i] is operator--> *,/,+,-
            int value2=value.top();
            value.pop();
            int value1=value.top();
            value.pop();
            int answer=solve(value1,value2,str[i]);
            value.push(answer);
        }    

       

    }     
    

             
    cout<<value.top()<<endl;

}
