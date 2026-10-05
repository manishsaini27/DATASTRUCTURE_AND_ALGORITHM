#include<iostream>
using namespace std ;
class Node{    //LINKED LIST PROPER NODE
    public:
    int val;
    Node* next;  //next ek pointer hai jo kisi Node ka address store karega.
    Node(int val){
        this->val = val;
        this->next = NULL;   // by default null  

    }
};

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    //cout<<a->next->next->next->val;  // this give 40 as a output;
 
    Node* temp = a;
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}