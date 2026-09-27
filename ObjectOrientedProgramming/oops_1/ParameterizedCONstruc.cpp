#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    Hero() {
        cout<< "Constructure Called "<<endl;
    }

    //Parameterized Constructure 
    Hero(int health) {
        cout<<"this -> "<< this<< endl;
        this->health = health;
    }

    //Parameterized Constructure 
    Hero(int health, char level) {
        this->level = level;
        this->health = health;
    }
    // Getter 
    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }
    
    //Setter
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main() {

    //object create statically
    
    Hero Ramesh(10);
    cout<< "Address of ramesh"<< &Ramesh<<endl;

    //Dynamically create 

    Hero *h  = new Hero(11);

    Hero temp(22,'B');
    
    
}