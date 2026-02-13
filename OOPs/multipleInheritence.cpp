#include<iostream>
using namespace std;

class A{
    public:
        int a_ka_public;

    public:
        A(){
            cout<<"A ka constructor call hua.";
        }
};

class B : virtual public A{ 
    public:
        int b_ka_public;

    public:
        B(){
            cout<<"B ka constructor call hua.";
        }
};

class C : virtual public A{ 
    public:
        int c_ka_public;

    public:
        C(){
            cout<<"A ka constructor call hua.";
        }
};

class D : public B, public C{ 
    public:
    int d_ka_public;

    void show(){
        cout<<a_ka_public;
    }

    public:
        D(){
            cout<<"A ka constructor call hua.";
        }
};

