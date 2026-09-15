// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the number of rows : ";
//     cin>> m;

//     int n;
//     cout<<"Enter the number of the columns : ";
//     cin>>n;

//     vector<vector<int>>matrix(m,vector<int>(n));

//     cout<<"Enter the element of the matrics : ";
//     cout<<endl;

//     for(int i =0; i<m; i++) {
//         for(int j =0; j<n; j++) {
//             cin>>matrix[i][j];
//         }
//     }
//     //spiral
//     int minr =0;
//     int minc=0;
//     int maxr = m-1;
//     int maxc = n-1;

//     while(minr<=maxr && minc<=maxc){
//         //rigth
//         for(int j=minc; j<=maxc ;j++){
//             cout<<matrix[minr][j] <<" ";
//         }
//         minr++;

//         if(minr>maxr || minc>maxc) break;

//         //down
//         for(int i= minr; i<=maxr ;i++) {
//             cout<<matrix[i][maxc]<<" ";
//         }
//         maxc--;
        
//         if(minr>maxr || minc>maxc) break;

//         //left
//         for(int j=maxc; j>=minc; j--) { 
//             cout<<matrix[maxr][j]<<" ";
//         }
//         maxr--;
//         if(minr>maxr || minc>maxc) break;

//         //up
//         for(int i=maxr ;i>=minr ;i--){
//             cout<<matrix[i][minc]<<" ";
//         }
//         minc++;
//         if(minr>maxr || minc>maxc) break;
//     }

// }

 

// #include<iostream>
// #include<vector>

// using namespace std;
// int main(){
//     int m;
//     cout<<"Enter the number of rows : ";
//     cin>> m;

//     int n;
//     cout<<"Enter the number of the columns : ";
//     cin>>n;

//     vector<vector<int>>matrix(m,vector<int>(n));

//     cout<<"Enter the element of the matrics : ";
//     cout<<endl;

//     for(int i =0; i<m; i++) {
//         for(int j =0; j<n; j++) {
//             cin>>matrix[i][j];
//         }
//     }
//     //spiral
//     int minr =0;
//     int minc=0;
//     int maxr = m-1;
//     int maxc = n-1;
//     int tne = m*n;
//     int count = 0;

//     while(minr<=maxr && minc<=maxc){
//         //rigth
//         for(int j=minc; j<=maxc && count<tne ;j++){
//             cout<<matrix[minr][j] <<" ";
//             count++;
//         }
//         minr++;

//         //down
//         for(int i= minr; i<=maxr && count<tne ;i++) {
//             cout<<matrix[i][maxc]<<" ";
//             count++;
//         }
//         maxc--;
//         //left
//         for(int j=maxc; j>=minc && count<tne;j--) {
//             cout<<matrix[maxr][j]<<" ";
//             count++;
//         }
//         maxr--;
    
//         //up
//         for(int i=maxr ;i>=minr&& count<tne ;i--){
//             cout<<matrix[i][minc]<<" ";
//             count++;
//         }
//         minc++;
        
//     }

// }


#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m;
    cout<<"Enter the number of the rows : ";
    cin>>m;

    int n;
    cout<<"Enter the number of the columns : ";
    cin>> n;

    vector<vector<int>>matrix(m,vector<int>(n));
    cout<<"Enter the element of the matrix : ";

    for(int i=0;i<m; i++) {
        for(int j=0;j<n; j++) {
            cin>>matrix[i][j];
        }
    }

    //Sporal printing


    int minr = 0;
    int maxr = m-1;
    int minc = 0;
    int maxc = n-1;
    

    while(minr<=maxr && minc<=maxc) {
        //Right
        for(int j =minc ; j<=maxc; j++){
            cout<<matrix[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc){
            break;
        }

        //Down
        for(int i=minr; i<=maxr;i++) {
            cout<<matrix[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc){
            break;
        }

        //Left

        for(int j=maxc; j>=minc ;j--) {
            cout<<matrix[maxr][j]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc){
            break;
        }

        for(int i= maxr; i>=minr; i--){
            cout<<matrix[i][minc]<<" ";
        }
        minc++;
        if(minr>maxr || minc>maxc){
            break;
        }




    }
}
