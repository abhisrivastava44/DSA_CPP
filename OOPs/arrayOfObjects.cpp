#include<iostream>
using namespace std;
class Cricketer{
    public:
        char name;
        int age;
        int numberOfMatches;
        int averageRuns;
};

int main(){
    Cricketer virat;
    virat.name='v';
    virat.age=30;
    virat.numberOfMatches=100;
    virat.averageRuns=80;

    Cricketer dhoni;
    dhoni.name='d';
    dhoni.age=40;
    dhoni.numberOfMatches=160;
    dhoni.averageRuns=90;

    Cricketer cricketers[2]={virat,dhoni};

    for(int i=0; i<=1; i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].numberOfMatches<<endl;
        cout<<cricketers[i].averageRuns<<endl;
        cout<<endl;

    }

}