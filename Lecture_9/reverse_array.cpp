// swap kerne ke piche ka logic 
//agr koi arrya diya hai 
//exp = {1,2,3,4,5,6}
//aur hame index 0 ,1 ko swap kerna hai to ham sbse pehle 
// ham kisi index ke value ko ek temporary variable me store kerenge 

// temp = arr[1]
// arr[1] = arr[0]
//arr [0] = temp

// yelogoc rhega 

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    reverseArray(arr, n);

    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}










#include<iostream>
using namespace std ;

void reverse(int arr[], int n) {
    int start = 0;
    int end = n-1;
    while (start <= end) {
        swap(arr[start] ,arr[end]);
        start ++;
        end --;
    }
}

void printArray(int arr[] ,int n){
    for(int i=0; i< n; i++){
        cout<< arr[i] << endl;
    }
    cout<< endl;
}


int main() {

    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr , 6);
    reverse(brr ,5);

    printArray(arr ,6);
    printArray(brr, 5);

    return 0;
}

