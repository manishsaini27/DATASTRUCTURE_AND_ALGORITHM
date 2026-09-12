#include<iostream>
#include<vector>

using namespace std;
int main() {
    int m;
    cout<<"ENter the number of the 1st matrics rows : ";
    cin>>m;
    int n;
    cout<<"Enter the number of 1st matrics columns : ";
    cin>>n;


    int p;
    cout<<"Enter the number of the 2nd matrics rows : ";
    cin>> p;
    int q;
    cout<< "Enter the number of the 2nd matrix column : ";
    cin>>q;

    if(n==p) {
        vector<vector<int>>a(m,vector<int>(n));
        cout<<"Enter the element of 1st matrics : ";
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
            cin>>a[i][j];
            }
        }

        vector<vector<int>>b(p,vector<int>(q));
        cout<<"Enter the element of 2nd matrics : ";
        for(int i=0;i<p;i++) {
            for(int j=0;j<q;j++){
            cin>>b[i][j];
            }
        }
         // Resultant matrix
        vector<vector<int>>result(m,vector<int>(q));

        for(int i=0; i<m;i++) {
            for(int j=0;j<q;j++) {
                result[i][j] =0;
                //res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + ....
                for(int k=0;k<p;k++){
                    result[i][j] += a[i][k]*b[k][j];
                }

            }
        }

        //print 
        for(int i=0; i<m;i++){
            for(int j=0;j<q;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"THE matrix is not multiplicable....";
    }



} 