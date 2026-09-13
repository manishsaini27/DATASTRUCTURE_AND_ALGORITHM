//WRITE A PROGRAM TO PRINT SUM OF ALL THE ELEMENTS OF A 2D MATRIX.



#include<iostream>
using namespace std;
int main() {
    int arr[2][2];
    for(int i=0; i<2; i++) {
        for(int j = 0; j<2; j++) {
            cin>> arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0; i<2; i++) {
        for(int j = 0; j<2; j++) {
            sum += arr[i][j];
        }
    }
    cout<<sum;
    
}