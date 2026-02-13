#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Bike{
    public: 
        int tyreSize;
        int engineSize;

        Bike(int tyreSize,int engineSize){     //constructor
            this->tyreSize=tyreSize;
            this->engineSize=engineSize;
        }
};

int main(){
    Bike tvs(12,100);   //jb bhi object creation hota h tb constructor automatically call ho jaata h    
    Bike honda(15,150);
    Bike royalEnfield(13,350);

    cout<<"tyreSize = "<<tvs.tyreSize<<"  engineSize = "<<tvs.engineSize<<endl;
    cout<<"tyreSize = "<<honda.tyreSize<<"  engineSize = "<<honda.engineSize<<endl;
    cout<<"tyreSize = "<<royalEnfield.tyreSize<<"  engineSize = "<<royalEnfield.engineSize<<endl;
}