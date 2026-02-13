#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    //printing in reverse order-->emptying the stack i.e stack khaali ho jaata h
    // while(st.size()>0){             
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    //printing in reverse order-->without emptying the original stack 
    stack<int> temp;        //printing the stack, popping out element and storing it into other stack named "temp"
    while(st.size()>0){             
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){   //putting the elements back from temp to st
        st.push(temp.top()); 
        temp.pop();
   
    }

    cout<<endl;
    cout<<st.top();






}