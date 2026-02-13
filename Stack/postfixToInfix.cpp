#include<iostream>
#include<stack>
using namespace std;

string solve(string value1, string value2, char ch){
    string str="";
    str+=value1;
    str.push_back(ch);
    str+=value2;
    return str;
}

int main(){
    string str="79+4*8/3-";     //postfix expression
    cout<<str<<endl;

    stack<string> value;   //we need one stack for values -->int type

    for(int i=0; i<str.length(); i++){
        if(str[i]>=48 && str[i]<=57){       //check if str[i] is diit or not-->digits ascii value--48 to 57
            value.push(to_string(str[i]-48));
        }   

        else{                   //chaeck if s[i] is operator--> *,/,+,-
            string value2=value.top();
            value.pop();
            string value1=value.top();
            value.pop();
            string answer=solve(value1,value2,str[i]);
            value.push(answer);
        }    

       

    }     
    

             
    cout<<value.top()<<endl;

}
