#include<iostream>
#include <cstring>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char *name;
    char level;

    Hero() {
        cout<< "Constructure Called "<<endl;
        name = new char[100];
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
    //Copy Constructure 
    Hero(Hero& temp) {

        cout<<"Copy Constructure Callled" <<endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print() {
        cout<<endl;
        cout<<"[ Name: "<<this->name<<" ,";
        cout<<"Health :" << this->health<<" ,";
        cout<<"Level"<<this->level<<" ]";
        cout<<endl<<endl;
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

    void setName(char name[]){
        strcpy(this->name,name);
    }
};

int main() {


    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babber";
    hero1.setName(name);
    hero1.print();



    //use defult copy constructure 
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0]= 'G';
    hero1.print();

    hero2.print() ;




}