#include<iostream>
using namespace std;

class Player{
    public:
    int health;
    int score;
};

int main(){
    Player amit;
    amit.health=100;
    amit.score=90;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;


}