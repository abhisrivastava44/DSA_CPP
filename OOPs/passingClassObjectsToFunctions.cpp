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

int addScore(Player a,Player b){
    return a.getScore()+b.getScore();
}

Player getMaxScore(Player a,Player b){              //using class as a return type
    if(a.getScore()>b.getScore())       return a;
    else                                return b;
}

int main(){
    Player harsh;
    Player raghav;

    harsh.setAge(21);
    harsh.setScore(100);
    harsh.setIsAlive(true);
    harsh.setHealth(70);

    raghav.setAge(67);
    raghav.setScore(43);
    raghav.setIsAlive(true);
    raghav.setHealth(90);

    cout<<addScore(harsh,raghav)<<endl;
    Player sanket=getMaxScore(harsh,raghav);    //isko hm directly return nhi kra skte, pehle isko "Player" naam k datatype m store kr lo
    cout<<sanket.getScore();
}