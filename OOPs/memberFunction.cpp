#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    int health;

    void showHealth(){
        cout<<"Health is: "<<health;
    }
};

int main(){
    Player amit;
    amit.score=90;
    amit.health=100;

    amit.showHealth();
}