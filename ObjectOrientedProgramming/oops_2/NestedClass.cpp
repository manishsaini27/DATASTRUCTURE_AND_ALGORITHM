#include<iostream>
using namespace std;


class Gun {
public:
      int ammo;
      int damage;
      int scope;  
};

class Player{
private:    
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;

    class Helmet{
        int hp ;
        int level;
    public:
        //setter
        void setHp(int hp){
            this->hp = hp;
        }
        void setLevel(int level){
            this->level = level;
        }
        //getter
        int getHp() {
            return hp;  //helmat wala hp return kerega 
        }   
        
        int getLevel() {
            return level;   //helmat wala level return kerega
        }

    };
public:
//GETTER
    int getHealth() {
        return health;
    }
    int getAge() {
        return age;
    }
    int getscore() {
        return score;
    }
    bool isalive() {
        return alive;
    }

    Gun getGun() {
        return gun;
    }

    //SETTER

    void setHealth( int health) {
        this->health = health;
     }
    void setAge(int age) {
        this->age = age;
    }
    void setscore(int score) {
        this->score = score;
    }
    void setIsalive(bool alive) {
        this->alive = alive;
    }
    
    void setgun(Gun gun){
        this->gun = gun;
    }
};


int main() {

    Player harsh;
    Player raghav;

    Gun akm;
    akm.ammo= 100;
    akm.damage= 50;
    akm.scope = 20;

    harsh.setHealth(45);
    harsh.setAge(53);
    harsh.setscore(200);
    harsh.setIsalive(true);
    harsh.setgun(akm);


    Gun awm;
    awm.ammo = 15;
    awm.damage= 54;
    awm.scope = 8;

    raghav.setHealth(23);
    raghav.setAge(77);
    raghav.setscore(199);
    raghav.setIsalive(false);
    raghav.setgun(awm);

}