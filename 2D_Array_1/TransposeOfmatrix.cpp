#include<iostream>
#include<vector>
using namespace std ;
int main(){
    int m;
    cout<< "Size of the row : ";
    cin>> m;

    int n ;
    cout<< "Size of column : ";
    cin>> n;

    vector<vector<int>> arr(m, vector<int>(n));

    for(int i=0; i<m; i++) {
        for(int j=0 ;j <n; j++){
            cin>> arr[i][j];
        }
    }

    for(int j=0;j<n;j++) {
        for(int i=0;i<m; i++){
            cout<< arr[i][j]<<" ";
        }
        cout<< endl;
    }
}