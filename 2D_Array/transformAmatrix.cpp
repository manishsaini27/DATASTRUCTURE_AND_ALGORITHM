//you are given a matrix /2d array  of soe (n*n) change this matrix into its transpose......

//CONDITION :  TRANSPOSE IN THE SAME MATRIX....


#include<iostream>
#include<vector>
using namespace std ;
int main() { 
    int m;
    cout<<"Enter the size of the row/column : ";
    cin>> m; 
    vector<vector<int>>matrix(m,vector<int>(m));

    for(int i =0 ; i< m; i++) {
        for(int j =0;j < m; j++) {
            cin>> matrix[i][j];
        }
        
    }
    cout<<endl; 
    for(int i =0 ; i< m; i++) {
        for(int j =0;j < m; j++) {
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    cout<< endl;

    for(int i =0 ; i< m; i++) {
        for(int j =i+1;j < m; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;

        }
        cout<<endl;
        
    }

    for(int i=0; i< m; i++) {
        for(int j= 0 ; j<m ;j++) {
            cout<< matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }

}