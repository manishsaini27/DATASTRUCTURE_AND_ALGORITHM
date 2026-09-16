#include<iostream>
#include<vector>
using namespace std;

void change(int a[]) {
    a[0] = 9;
}

void change2d(int array[3][3]){ // function me 2d array ka size dena jruri hota hai 
    array[0][0] = 100;
}
int main() {
    // int a[3] = {1,2,3};
    // cout<<a[0]<<endl;
    // change(a);
    // cout<<a[0] <<endl;
    // Aksar languages mein (jaise C, C++, Java, JavaScript, Python) 1D Array Pass by Reference (ya uske jaisa) behave karta hai, jiska matlab hai ki agar aap function ke andar array mein koi badlav (change) karenge, toh woh main array mein bhi change ho jayega.

    int array[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<array[0][0]<<endl;
    change2d(array);
    cout<<array[0][0]<<endl;




}