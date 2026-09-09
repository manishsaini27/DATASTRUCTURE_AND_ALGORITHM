#include<iostream>
using namespace std ;


void printarray(int arr[] ,int n) {
    for(int i= 0; i<n; i++) {
        cout<< arr[i]<< endl;

    }cout<< endl;
}

void swapalternate (int arr[] , int size) {
    for(int i = 0; i<size ; i+=2) {
        if(i+1 < size) {
            swap(arr[i] , arr [i+1]);
        }
    }
}
int main() {
    int even[8] = {5,4,3,6,77,88,22,44};
    int odd[5] = {11,33,44,9,43};
    swapalternate(even, 8);
    swapalternate(odd , 5);

    printarray(even , 8);
    printarray(odd , 5);

    return 0 ;

}