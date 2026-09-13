#include<iostream>
using namespace std;
int main() {
    //int arr[3][3]; //Declaration 
    //rows -> 3  0-2
    // columns ->3  0-2

    // arr[0][0] = 4;
    // cout<< arr[0][0];

    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // cout<< arr[1][2];

    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};

    // cout<< arr[1][2];
    

    //TRAVERSAL OF ARRAY 
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // for(int i=0; i<=2; i++) {
    //     cout<< arr[0][i] << " ";
    // }
    // cout<<endl;
    // for(int i=0; i<=2; i++) {
    //     cout<< arr[1][i] << " ";
    // }
    // cout<<endl;
    // for(int i=0; i<=2; i++) {
    //     cout<< arr[2][i] << " ";
    // }
    // cout<<endl;


    int arr[4][5] ={1,2,3,4,5,6,7,8,9,10,11,22,33,44,55,66,77,88,99,100};
    for(int i=0; i<=3; i++){
        for(int j=0; j<=4; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }


}