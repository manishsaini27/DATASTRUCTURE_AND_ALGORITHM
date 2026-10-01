//FUNCTION OVERRIDDING 



#include<iostream>
using namespace std;

class Animal {
    public:
    void Speak(){
        cout<<"Speakingg"<<endl;

    }
};

class Dog : public Animal {
    public :
    void Speak() {
        cout<<"Bark" <<endl;
    }

};

int main() {
    Dog obj;  // pehle hamne dog ka obj bnaya 
    obj.Speak() ; // then in Dog class there is a function Speak that print Bark Output so the output is bark...

    // if Dog class would not have any function then it print the function of the class Animal...
}
