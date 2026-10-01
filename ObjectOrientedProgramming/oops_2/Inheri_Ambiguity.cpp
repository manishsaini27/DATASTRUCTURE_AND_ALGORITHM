#include<iostream>
using namespace std;

class A {
    public:
    void func() {
        cout<<"I am A student" << endl;
    }

};

class B {
    public:
    void func() {
        cout<< "I am a Engineer" << endl;

    }
};

class C : public A,public B {

};

int main() {
    C obj;
    //obj.func();  / in this line we did not specify the parent class

    obj.A::func();  // here we use scope resulation operator ::

    obj.B::func();

    return 0;

}
