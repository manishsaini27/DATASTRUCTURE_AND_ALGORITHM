#include<iostream>
using namespace std ;

void printTheArray(int arr[] ,int n){
    for(int i = 0; i<n ;i++){
        cout<< arr[i] <<" ";
    }
}

void sortZeroOne( int arr[] , int n){
    int left = 0;
    int right = n-1;
    while(left < right){
        while(arr[left] == 0 && left< right){
            left++;
        }
        while (arr[right] == 1 && left < right){
            right--;
        }
        if(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[8] = {1,0,1,0,1,0,1,0};
    sortZeroOne(arr ,8);
    printTheArray(arr , 8);
}


// THIS IA THE ANOTHER WAY OF SOLVING THE QUESTION USING THE COUNTIING APPROACH...---->>>>>

#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int n){
    int zeroCount = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            zeroCount++;
        }
    }

    for(int i = 0; i < zeroCount; i++){
        arr[i] = 0;
    }

    for(int i = zeroCount; i < n; i++){
        arr[i] = 1;
    }
} 