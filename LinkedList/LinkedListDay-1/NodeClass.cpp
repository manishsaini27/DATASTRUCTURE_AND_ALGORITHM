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
int main(){
    // 10 20 30 40 
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    

    //connection 
    a.next = &b;  // address of b
    b.next = &c;
    c.next = &d;

    

    // If i want to print  the value of b without using  cout<<b.val<<endl; so we can do ->

    cout<<(a.next)->val;
    //cout<<(*(a.next)).val;  // using derefrence operator
    // here a.next is a pointer that pointes to the next node b
     cout<<endl;

    //NOW IF WE WANT TO PRINT THE VALUE OF THE D USING A SO WHAT CAN WE DO 

    cout<<(((a.next)->next)->next)->val;

    cout<<endl;
    //IF WE WANT TO PRINT ALL THE VALUES USING LOOP 
    Node temp = a;
    while(1) { // using 1 while loop runs infinity times
        cout<<temp.val<<" ";
        if(temp.next== NULL){
            break;
        }
        temp = *(temp.next);
    }


}