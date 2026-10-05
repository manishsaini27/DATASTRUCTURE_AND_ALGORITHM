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

void revDisplay(Node* head) {
    if(head==NULL) return;
    revDisplay(head->next);
    cout<<head->val<<" "<<endl;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    revDisplay(a);
    

    // display(a);
    // cout<<size(a);
}