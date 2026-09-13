#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m;
    cout<<"Enter the no of row: ";

    cin>> m;

    int n;
    cout<< "Enter the no of columns: ";
    cin>> n;
    vector<vector<int>> arr(m, vector<int>(n));

    

    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++){
            cin>>arr[i][j];
        }
    }
    //Print 
    for(int i=0; i<=m-1; i++) {
        for(int j=0; j<=n-1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

}