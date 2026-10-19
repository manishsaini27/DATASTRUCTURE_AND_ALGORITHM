#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val) {
        this-> val = val;
        this->next = NULL;
    }
};
class LinkedList{  //User defined data structure
public:    
    Node* head ;
    Node* tail ;
    int size=0;
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val) {
        Node* temp  =new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display() {
        Node* temp = head;
        while(temp!=NULL) {
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty!";
            return;
        }
        head = head->next;
        size--;

    }
    void deletAtTail() {
        if(size ==0) {
            cout<< "List is Empty";
            return;
        }
        Node* temp = head;
        while(temp-> next!=tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIndex( int idx) {
        if(size==0){
            cout<<"List is Empty";
            return;
        }
        if(idx <0 || idx>=size){
            cout<<"Invalid Index";
            return;
        }
        else if(idx == 0 ) return deleteAtHead();
        else if(idx==size-1) return deletAtTail();
        else{
            Node* temp  = head;
            for(int i=1; i<=idx-1; i++) {
                temp = temp->next;
            }
            temp-> next = temp->next->next;

            size--;

        }
    }

};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtEnd(30);
    ll.display();
    cout<<ll.size;
    cout<<endl;
    ll.deleteAtIndex(2);
    ll.display();
} 