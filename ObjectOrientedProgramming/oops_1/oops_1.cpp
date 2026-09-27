#include<iostream>
using namespace std;
class Player{
    public:
    int score;   //DATA MEMBERS
    int health;
    
    void showHealth() {   //MEMBER FUNCTION
        cout<<"Health is : "<<health<<endl;
    }

    void showScore() {
        cout<<"Score : "<<score;
    }
};

class Calculator{
    public:
    int a;
    int b;
    void add() {
        cout<<a+b<<endl;;

    }
    void substract() {
        cout<<a-b;
    }
};

int main() {
    int score[100]= {};
    int health[100] = {};

    Player amit;
    amit.score = 90; 
    amit.health = 100;

    amit.showHealth();
    amit.showScore();
    cout<<endl;

    Calculator calci;
    calci.a  =10;
    calci.b = 7;
    calci.add();

}