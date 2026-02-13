#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> st){
    stack <int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();

    }

    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    print(st);

    stack<int> temp;
    stack<int> t;

    while(st.size()>0){         //st khaali kro ar temp ko full kro
        temp.push(st.top());
        st.pop();
    }

    while(temp.size()>0){         //temp khaali kro ar t ko full kro
        t.push(temp.top());
        temp.pop();
    }

    while(t.size()>0){         //t khaali kro ar st ko full kro
        st.push(t.top());
        t.pop();
    }


    print(st);

    
}
