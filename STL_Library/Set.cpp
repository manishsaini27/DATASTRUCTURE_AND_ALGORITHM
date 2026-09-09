#include<iostream>
#include<set>
using namespace std;
int main() {
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(4);
    s.insert(7);
    s.insert(9);
    s.insert(5);
    s.insert(10);
    s.insert(4);
    s.insert(7);
    s.insert(9);

    for(int i :s) {
        cout<< i << endl;
    }
    cout<< endl;

    // ye sare elements ko sort ker deta hai ....
    

    // agr element ek se jyda bar ho tab bhi  we ek hi bar count hota hai
    
    set<int>:: iterator it = s.begin();
    it++;
    // 5 delete ho jayega..

    s.erase(it);
    for(auto i: s) {
        cout<<i<< endl;
    }
    cout<< endl;

    cout<< "10 is present or not ->" <<s.count(10) << endl; 

    set<int> :: iterator itr = s.find(5);
    for (auto it  = itr ; it!= s.end() ;it++){
        cout<<*it <<" ";

    }
    cout<< endl;



}