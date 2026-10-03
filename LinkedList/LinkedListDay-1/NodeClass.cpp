#include<iostream>
using namespace std ;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;

    }
};
int main(){
    // 10 20 30 40 
    Node a(10);
    Node b(20);
    Node c;
    Node d;
    

    // forming  Linked List 

    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
     


}