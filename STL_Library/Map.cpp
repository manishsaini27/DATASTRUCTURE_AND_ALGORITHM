#include<iostream>
#include<map>
using namespace std ;
int main() {
    map<int,string> m;

    m[1] = "Manish";
    m[2] = "kumar";
    m[3] = " saini";
    for(auto  i: m) {
        cout<< i.first<<" "<<i.second << endl;
    }
    // i.first keys ko print kerta hai aur i.second uski values ko print kerta hai..

    cout<<"finding 3 ->" << m.count(3) << endl;
    cout<<"finding 3 -> " << m.count(-3) << endl;

    m.erase(3);
    cout<<"After earse " << endl;
    for(auto i: m){
        cout<<i.first<<" " << i.second << endl;
    }
    cout<<endl << endl;

    auto it = m.find(2);
    for(auto i = it; i!= m.end(); i++){
        cout<<(*i).first << endl;
    }
}