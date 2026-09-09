#include<iostream>
#include<vector>

using namespace std;
int main(){
    int m;
    cout<<"Enter the size of rows : ";
    cin>>m;
    int n ;
    cout<<"Enter the size of column : ";
    cin>>n;

    vector<vector<int>>arr(m,vector<int>(n));

    for(int i=0; i<m; i++ ){
        for(int j=0 ; j<n; j++) {
             cin>>arr[i][j];
        }
        
    }
    for(int i=0; i<m; i++ ){
        for(int j=0 ; j<n; j++) {
            cout<< arr[i][j]<<" ";
          
        }
        cout<<endl;
    }
    cout<<endl;
    //stroe the transpose 

    vector<vector<int>>t(n,vector<int>(m));

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            t[i][j] = arr[j][i];
        }
    }
     for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }




}