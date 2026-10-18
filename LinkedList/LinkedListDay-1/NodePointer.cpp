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
// A S A FUNCTION FOR PRINTING THE ELEMENT OF THE LINKED LIST
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    } 
}
void insertAtEnd(Node* head, int val) {
    Node* t = new Node(val);
    while(head->next != NULL) head = head->next;
    head->next = t;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->next = b;
    b->next = c;
    c->next = d;

    display(a);
    insertAtEnd(a,80);
    cout<<endl;
    display(a);

    //cout<<a->next->next->next->val;  // this give 40 as a output;
    // cout<<endl;
    // Node* temp = a;
    // while(temp!=NULL) {
    //     cout<<temp->val<<" ";
    //     temp = temp->next;
    // }
}