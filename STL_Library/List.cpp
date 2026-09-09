#include<iostream>
#include<list>

using namespace std ;
int main() {
    list<int> l;
    // list<int> n(5,100);

    l.push_back(1);
    l.push_front(2);
    for(int i: l){
        cout<<i<<" ";
    }
    cout<< endl;
    l.erase(l.begin());// starting ka element delete ho jayega 
    cout<<"after erase" << endl;
    for(int i: l) {
        cout<< i << " ";
    }


}
