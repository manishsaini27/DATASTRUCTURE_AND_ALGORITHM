#include<iostream>
#include <climits>
using namespace std;
int main() {
    int arr[4][4];
    for(int i=0; i <4 ;i++) {
        for(int j=0;j<4; j++){
            cout<<"ENter the element"<<"["<<i<<"]" <<"[" <<j <<"]";
            cin>>arr[i][j];
        }
    }

    int largest = INT_MIN;
    int seclargest = INT_MIN;
    for(int i=0; i <4 ;i++) {
        for(int j=0;j<4; j++){
            if(arr[i][j]> largest){
                
                seclargest = largest;
                largest = arr[i][j];
            }else if(arr[i][j] > seclargest){
                seclargest = arr[i][j];
            }
        }
    }
    cout<<"Largest = "<< largest;
    cout<< "Second Largest = "<<seclargest;

}