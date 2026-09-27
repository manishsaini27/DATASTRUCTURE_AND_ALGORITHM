#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

// implimenting own constructure Hero()
// if we write own constructure the n the default constructure is automatically delete it self...
    Hero() {
        cout<< "Constructure Called "<<endl;
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
    
    Hero Ramesh;

    //Dynamically create 

    Hero *h  = new Hero;
    
    
}