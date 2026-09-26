#include<iostream>
using namespace std;

class Player{
private:    
    int health;
    int age;
    int score;
    bool alive;
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
};
int add(Player a, Player b) {
    return a.getscore() + b.getscore();
}

Player getMaxScorePlayer(Player a, Player b) {
    if(a.getscore() > b.getscore()){
        return a;
    }else{
        return b;
    }
}

int main() {
    Player harsh;  //Object Creation, statically
    Player raghav;

    harsh.setHealth(45);
    harsh.setAge(53);
    harsh.setscore(200);
    harsh.setIsalive(true);

    raghav.setHealth(23);
    raghav.setAge(77);
    raghav.setscore(199);
    raghav.setIsalive(false);


    cout<<"NEXT IS harsh" <<endl;


    cout<<harsh.getHealth()<<endl;
    cout<<harsh.getAge()<<endl;
    cout<<harsh.getscore()<<endl;
    cout<<harsh.isalive()<<endl;

    cout<<"NEXT IS RAGHAV"<<endl;

    cout<<raghav.getHealth()<<endl;
    cout<<raghav.getAge()<<endl;
    cout<<raghav.getscore()<<endl;
    cout<<raghav.isalive()<<endl;

    cout<<add(harsh,raghav);

    cout<<add(harsh ,raghav) <<endl;
    Player sanket = getMaxScorePlayer(harsh,raghav);  //dono player me se jiska bhi score max hoga we return ker dega....jo ki sanket nam ke new object me store hoga 
    cout<<sanket.getscore()<<endl;
    // ye hame jis player ka max score hoga we print kerke dega... jiase ye harsh ka score print kerke dega
    cout<<sanket.getHealth();

}