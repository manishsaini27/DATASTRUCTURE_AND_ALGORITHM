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
    Node c(30);
    Node d(40);
    

   cout<<a.val<<endl;
   cout<<b.val<<endl;
   cout<<c.val<<endl;
   cout<<d.val<<endl;
     


}