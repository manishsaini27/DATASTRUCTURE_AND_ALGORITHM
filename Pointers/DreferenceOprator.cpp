#include<iostream>
using namespace std ;
int main() {
    // int x = 122;
    // int* p = &x;
    // x = 90; // ye kerne se address nhi change hoti hai..

    // cout<<*p;   // THIS  PRINT THE  VALUE OF X ,WHATEVER IT IS..

    int x = 122;
    int* p = &x;
    cout<< x <<endl;
    *p = 6;  // this means p ke ander jao jo address pda hai usper jao fir us address ki value ko update ker do..
    cout<<x;
}   // Now this print the new updated value of x = 6;