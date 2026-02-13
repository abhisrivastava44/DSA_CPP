#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int getHealth(){        //getters
        return health;
    }

    int getAge(){
        return age;
    }

    int getScore(){
        return score;
    }

    int isAlive(){
        return alive;
    }

    void setHealth(int health){        //setters
        this->health=health;
    }

    void setAge(int age){
        this->age=age;
    }

    void setScore(int score){
        this->score=score;
    }

    void setIsAlive(bool alive){
        this->alive=alive;
    }
};

int main(){
    Player harsh;       //object creation->startically,compile time

    Player *urvi= new Player;   //new keyword helps to make the memory during runtime.  ->object cretaion->dynamically,run time

    harsh.setAge(21);       //this is static memory allocation
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    urvi->setScore(40);
    
    cout<<urvi->getScore()<<endl;

}