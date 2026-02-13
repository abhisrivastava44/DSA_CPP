#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;

    public:
    void setScore(int s){
        score= s;
    }
    void setHealth(int h){
        health=h;
    }

    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};

int main(){
    Player harsh;
    harsh.setScore(10);
    harsh.setHealth(50);
    cout<<harsh.getScore()<<endl;
    cout<<harsh.getHealth();
}