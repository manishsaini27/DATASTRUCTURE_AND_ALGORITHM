#include<iostream>
using namespace std;

class Player {
private:    
    int health;
    int score;

public:
    //setter
    void setHealth(int h){
        health = h;
    }

    //getter
    int getHealth() {
        return health;
    }

    //setter 
    void setScore(int s){
        score = s;
    }

    //getter
    int getScore(){
        return score;
    }

};

int main () {
    Player Manish;

    Manish.setHealth(100);
    Manish.setScore(50);

    cout<<"Health is " << Manish.getHealth() <<endl;

    cout<<"Score is " << Manish.getScore() << endl;


    return 0;
}