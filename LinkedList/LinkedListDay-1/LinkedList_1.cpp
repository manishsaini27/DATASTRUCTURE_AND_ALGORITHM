 // #include<iostream>
// using namespace std;
// class Student {
// public:    
//     string name;
//     int rollno;
//     int marks;
//     Student(string n, int r,  int m) {
//         name = n;
//         rollno = r;
//         marks= m;
//     }
// };
// int main() {
//     Student s("Manish", 45 ,77);

//     cout<<s.marks<<endl;
// }

  



// #include<iostream>
// using namespace std;
// class Student {
// public:    
//     string name;
//     int rollno;
//     int marks;
//     Student(string name, int rollno,  int marks) { //if the parameter name is same as class student then we use the this key word to make a differnece.....
//         this->name = name;
//         this->rollno = rollno;
//         this->marks= marks;
//     }
// };
// void change(Student &s)  { // using & we use pass by reference..
//     s.name = "Harsh";
// }
// int main() {
//     Student s("Manish", 45 ,77);
//     cout<<s.name<<endl;
//     change(s);


//     cout<<s.name<<endl;
// }




// #include<iostream>
// using namespace std;
// class Student {
// public:    
//     string name;
//     int rollno;
//     int marks;
//     Student(string name, int rollno,  int marks) {
//         this->name = name;
//         this->rollno = rollno;
//         this->marks= marks;
//     }
// };
// void change(Student &s) {
//     s.name = "Harsh";
// }
// int main() {
//     Student s("Manish", 45 ,77);
//     Student* ptr = &s;  // we creted a student type pointer that stores the student type values like s 
//     cout<<s.name<<endl;
//     // (*ptr).name= "Harsh";
       // using this we change the name 

//     ptr->name = "Snaket";// this is the second mathod of without using * ...
//     cout<<s.name<<endl;
// }



#include<iostream>
using namespace std;
class Student {
public:    
    string name;
    int rollno;
    int marks;
    Student(string name, int rollno,  int marks) {
        this->name = name;
        this->rollno = rollno;
        this->marks= marks;
    }
};
void change(Student* s) {
    s->name = "Harsh";
}
int main() {
    Student s("Manish", 45 ,77);
    cout<<s.name<<endl;
    change(&s);
    cout<<s.name<<endl;
}