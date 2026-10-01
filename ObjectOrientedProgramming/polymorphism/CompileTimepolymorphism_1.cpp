//compile time polymorphism

// function overloading


// #include<iostream>
// using namespace std;
// class A {
//     public:
//     void sayHello() {
//         cout<<"My name is Manish"<<endl;
//     }
  
//     // int  sayHello() {
//     //     cout<<"My name is Manish"<<endl;
//     // }
//     // this is also incorrect bcoz  ,changing the data type is not only better way to do function overloading 

//     void sayHello(string name ) {
//         cout<<"Hello" << name <<endl;
//     }
// };

// int main() {
//     A object;
//     object.sayHello();


//     return 0;
// }



//OPERATOR OVERLOADING 

// PLE ASE READ THE DOCUMENTATION FOR THE OPERATOR OVERLOADING 

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
    int a;
    int b;
    public:
    int add () {
        return a+b;
    }
    void operator+(B &obj) {
        int value1 = this-> a;
        int value2 = obj.a;
        cout<<"output" << value2- value1<<endl;
    }
};

class C : public A,public B {

};

int main() {
    B obj1 , obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;  // yha + ye uper wala funtion call  hoga aur wha se val1 and val2 ko fetch kerga 
    return 0;
}