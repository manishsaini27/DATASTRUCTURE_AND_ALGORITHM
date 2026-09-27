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
    Player raghav; // compile time ,static allocation


    Player *urvi  = new Player; // run time ,dynamic allocation;
    Player urviObject  = *urvi;
    
    // if we want to work with the addres 
    // Player *urvi = new Player;
    // for set the value
    // *urvi.setHealth(234);
    //ALSO WE CAN DO THIS WITH THAT 
    // urvi-> setHealth(20);


    harsh.setHealth(45);
    harsh.setAge(53);
    harsh.setscore(200);
    harsh.setIsalive(true);

    raghav.setHealth(23);
    raghav.setAge(77);
    raghav.setscore(199);
    raghav.setIsalive(false);


    urviObject.setscore(40);
    urviObject.setAge(24);



    cout<<urviObject.getscore()<<endl;

    cout<<add(harsh,raghav)<<endl;;

    cout<<add(harsh ,raghav) <<endl;
    Player sanket = getMaxScorePlayer(harsh,raghav);  //dono player me se jiska bhi score max hoga we return ker dega....jo ki sanket nam ke new object me store hoga 
    cout<<sanket.getscore()<<endl;
    // ye hame jis player ka max score hoga we print kerke dega... jiase ye harsh ka score print kerke dega
    cout<<sanket.getHealth();

}