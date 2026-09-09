#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<string>q;
    q.push("Manish");
    q.push("Kumar ");
    q.push("Saini");

    cout<< "First Element " << q.front() <<  endl;
    q.pop();
    cout<< "After the pop first element is " << q.front() << endl;

    cout<<"The size after the pop " << q.size() << endl;

}