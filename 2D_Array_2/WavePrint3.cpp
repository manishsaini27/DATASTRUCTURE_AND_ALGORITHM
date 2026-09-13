#include<iostream>
#include<vector>

using namespace std;
int main(){
    int m;
    cout<<"Enter the number of rows : ";
    cin>> m;

    int n;
    cout<<"Enter the number of the columns : ";
    cin>>n;

    vector<vector<int>>matrix(m,vector<int>(n));

    cout<<"Enter the element of the matrics : ";
    cout<<endl;

    for(int i =0; i<m; i++) {
        for(int j =0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }

    for(int j=0;j<n;j++) {
        if(j%2 == 0) {
            for(int i=0;i<m;i++) {
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1; i>=0;i--) {
                cout<<matrix[i][j]<<" ";
            }
        }
    }

     


}    