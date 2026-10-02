//  WRITE A PROGRAM TO CALCULATE SUM OF TWO NUMBERS USING POINTERS...

#include<iostream>
using namespace std;
int main(){
    // int x= 7;
    // int y =8;

    // int* p1 = &x;
    // int* p2 = &y;
    // cout<<"The total sum of the numbers is" <<*p1 + *p2<<endl;


    // NOW ENTER THE NUMBER USING THE POINTERS...

    int x,y;
    int* p1 = &x;
    int* p2 = &y;
    cout<<"Enter the first number" <<endl;
    cin>> *p1;
    cout<<"Enter the second number" <<endl;
    cin>>*p2;

    cout<<"The addition of the numbers is " <<* p1 + *p2<< endl;

}