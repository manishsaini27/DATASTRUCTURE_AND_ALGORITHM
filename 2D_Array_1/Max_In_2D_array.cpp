// WRIYE A C++ PROGRAM TO FIND THE LARGEST ELEMENT OF A GIVEN 2D ARRAY OF INTEGERS.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[4][4];
    for(int i=0; i<4; i++) {
        for(int j=0 ; j<4 ;j++) {
            cin>> arr[i][j];

        }

    }
    // MAX

    int max = INT_MIN;
    for(int i=0; i<4; i++) {
        for(int j=0 ; j<4 ;j++) {
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }

    }
    cout<< max;

}
