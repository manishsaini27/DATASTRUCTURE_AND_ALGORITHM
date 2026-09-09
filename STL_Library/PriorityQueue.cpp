#include<iostream>
#include<queue>

using namespace std ;
int main() {
    // max heap
    priority_queue<int> maxi;
    // maxi name se ek max heap create kiya;

    // min -heap
    priority_queue<int, vector<int> , greater<int> > mini;
    // mini nam se heap create kiya 

    maxi.push(1);
    maxi.push(2);
    maxi.push(3) ;
    maxi.push(4);
    maxi.push(5) ;
    maxi.push(6);

    cout<<"Size->" << maxi.size() << endl;

    int n = maxi.size();

    for(int i =0 ; i<n ; i++) {
        cout<< maxi.top() <<" ";// ye jo maximum element hoga we dega 
        maxi.pop(); // aur ye  top wale element ko htane ka kam kerta hai 
    }cout<< endl;


    mini.push(5);
    mini.push(4);
    mini.push(3);
    mini.push(2);

    mini.push(1);

    cout<<"size of the mini->" << mini.size() << endl;

    int m = mini.size() ;
    for(int i= 0; i<m ; i++) {
        cout<< mini.top() << endl; // ye jo minimum element hota hai use deta hai 

        mini.pop(); // au rye us minimum element ko htane ka kam kerta hai //
    }cout<< endl;


}