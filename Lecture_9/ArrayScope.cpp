#include<iostream>
using namespace std ;

void update(int arr[],int n){
    cout<< "Inside the function "<< endl;
    arr[0] = 120;
    // printing the array 
    for(int i= 0; i<n ; i++){
        cout<< arr[i] << endl;
    }
    cout<< "Going back to the main function " << endl;


}

int main() {
    int arr[3]  = {1,2,3};
    update(arr,3);

    for(int i= 0; i<3 ; i++){
        cout<< arr[i] << endl;
    }
    return 0;

}

// yha per ham dekh  rhe hai ki function me change kerne per arr[0] ki value to main me bhi change ho ja rha hai 
//WHY :
//Bhai ye C++ ka bahut important concept hai: Arrays function me pass hone par copy nahi bante, unka address pass hota hai.

// int arr[3] = {1,2,3};
// update(arr,3);

// Yahan arr function ko pass karte waqt actually array ke first element ka address pass hota hai.