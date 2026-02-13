#include<iostream>
using namespace std;

class Vehicle{
    public:
        int a_ka_public;

    public:
        void show(){
            cout<<"main vehicle ka show hu\n";
        }
};
 
class Bike : public Vehicle{ 
    public:
        int b_ka_public;

    public:
        virtual void show(){        //class Bike ne show() function ko redefine kr diya (show function is already defined in vehicle)---this is  called function overriding
            cout<<"Aham bike ka show asmi\n";
        }
};

int main(){
    Vehicle a;
    a.show();

    Bike b;
    b.show();

    b.Vehicle::show();    //Bike show() fuction ko redefine kr diya h, but abhi bhi uske paas vehicle ka purana waala show function h and that can be fectched by using scope resolution operator

    //accesssing through pointer-->using virtual functions==virtual functions make sure the correct function is called for an object , regardless the pointer used for calling it
    Bike c;
    Vehicle *a;
    a=&c;
    

}




