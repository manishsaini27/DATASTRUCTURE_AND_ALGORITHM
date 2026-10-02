#include<iostream>
using namespace std;
int main() {
    // int x = 7;
    // int* ptr = &x;
    // cout<< ptr<< endl;  
    // //0x261fe78
    // ptr = ptr+1;

    // cout<<ptr<<endl;
    //0x261fe7c

    // ptr ka address 4 byte se increase ho gya hai......



    // bool flag = true;
    // bool* ptr = &flag;
    // cout<<ptr <<endl;   
    // //0x261fe7b
    // ptr = ptr + 1;
    // cout<<ptr <<endl;

    //0x261fe7c
    // bool acquire i byte so if we increment then it will increase only 1 byte in its address  b -c;



    int x = 7;
    int* ptr = &x;
    cout<< *ptr<< endl;  
    
    *ptr = *ptr+1;
    // (*ptr)++ = *ptr+1;


    cout<<*ptr<<endl;  // it will print 8 bcoz 7 updated by 1
    



}