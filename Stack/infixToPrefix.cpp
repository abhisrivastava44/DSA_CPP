#include<iostream>
#include<stack>
using namespace std;

int priority(char ch){
    if(ch=='+' || ch=='-')      return 1;   //assuming priority=1
    else                        return 2;   //assuming priority=2   (*,/)

}

string solve(string value1,string value2,char ch){
    //we have to store prefix in the answer.
    //prefix is -> oper val1 val2
    string str="";
    str.push_back(ch);          //hm character ko directly add nhi kr skte in string, we have to push_back it
    str+=value1;
    str+=value2;
    return str;
}



int main(){
    string str="(7+9)*4/8-3";     //infix expression
    cout<<str<<endl;

    stack<string> value;
    stack<char> oper;

    for(int i=0; i<str.length(); i++){
        if(str[i]>=48 && str[i]<=57){       //check if str[i] is diit or not-->digits ascii value--48 to 57
            value.push(to_string(str[i]-48));
        }   

        else{                   //chaeck if s[i] is operator--> *,/,+,-,(,)
            if(oper.size()==0)                                   oper.push(str[i]);
            else if(str[i]=='(')                                 oper.push(str[i]);
            else if(oper.top()=='(')                              oper.push(str[i]);
            else if(str[i]==')'){       //do the work
                while(oper.top()!='('){     //jb tk opening bracket na mile tb tk kaam kro
                    char ch=oper.top();
                    oper.pop();
                    string value2=value.top();
                    value.pop();
                    string value1=value.top();
                    value.pop();
                    string answer=solve(value1,value2,ch);
                    value.push(answer);
                }
                oper.pop();                 //then uss bracket ko bhi hta do
            }    

            else if(priority(str[i])>priority(oper.top()) )      oper.push(str[i]);
               
            
            else{   //priority(str[i])<=priority(operator.top())--->then do value1 operatro value 2
                    while(oper.size()>0 && priority(str[i])<=priority(oper.top())){
                        char ch=oper.top();
                        oper.pop();
                        string value2=value.top();
                        value.pop();
                        string value1=value.top();
                        value.pop();
                        string answer=solve(value1,value2,ch);
                        value.push(answer);

                    }
                    oper.push(str[i]);

            }

        }     
    }

    while(oper.size()>0){           //still operator stack can have some values, so make it empty-->i.e kaam krte rho
        char ch=oper.top();
        oper.pop();
        string value2=value.top();
        value.pop();
        string value1=value.top();
        value.pop();
        string answer=solve(value1,value2,ch);
        value.push(answer);     

                        
    }           
    cout<<value.top()<<endl;

}
