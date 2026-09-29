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
        char *ch = new char[strlen(temp.name)+ 1];
        strcpy(ch,temp.name);
        this->name= ch;

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

    //DESTRUCTURE 
    ~Hero() {
        cout<< "Destructure bhai called"<<endl;
    }
};

int main() {
    //statis
    Hero a;

    //Dynamic
    
    Hero *b  =new Hero();
    //manually called destructure
    
    delete b;


    return 0;
}