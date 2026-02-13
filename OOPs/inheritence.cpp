#include<iostream>
using namespace std;

// class vehicle{  //base class, parent class
//     public:
//         int tyreSize;
//         int engineSize;
//         int lights;
//         string companyName;
// };

// class Car : public vehicle{     //derived class, child class
//     public:
//         int steeringSize;
// };

// class Bike : public vehicle{
//     public:
//         int handleSize;
// };

class A{
    private:    //private can't be accessed and also can't be inherited
        int a_ka_private;
    protected:  //protected cannot be accessed, but can be inherited
        int a_ka_protected;
    public:     //public can be accessed, and can be inherited
        int a_ka_public;
};

class B : private A{ //1st private means A se jo variables aa rhe h woh B k liye private rhenge(chahe woh protected waala hi kyu na ho, woh B k liye private ho jayyega)
    public:
        int b_ka_public;
};

int main(){
    B b;
    b.b_ka_public=10;
}
