#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bike{
    public: 
        int tyreSize;
        int engineSize;

        Bike(int ts, int es) : tyreSize(ts), engineSize(es){};
        Bike(int ts) : tyreSize(ts), engineSize(100){};
        Bike() : tyreSize(12), engineSize(100){};

};

