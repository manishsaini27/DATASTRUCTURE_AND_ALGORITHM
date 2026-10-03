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
//     Student* ptr = &s;
//     cout<<s.name<<endl;
//     // (*ptr).name= "Harsh";

//     ptr->name = "Snaket";
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