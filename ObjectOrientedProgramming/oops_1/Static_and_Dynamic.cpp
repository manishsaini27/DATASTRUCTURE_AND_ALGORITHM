#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
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
    
    Hero a;  //static allocation 
    a.setHealth(80);
    a.setLevel('B');
    cout<<"Level is " << a.level<<endl;
    cout<<"Heakth is :" <<a.getHealth()<< endl;
    
    Hero *b = new Hero; //Dynamically allocation
    b->setHealth('A');
    b->setLevel(70);

    cout<<"Level is " << (*b).level<<endl;
    cout<<"Heakth is :" <<(*b).getHealth()<< endl; 


    cout<<"Level is " << b->level<<endl;
    cout<<"Heakth is :" <<b->getHealth()<< endl;

}