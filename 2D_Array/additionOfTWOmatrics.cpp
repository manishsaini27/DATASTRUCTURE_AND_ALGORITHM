// #include<iostream>
// using namespace std;
// int main(){
//     int a[2][3] = {{1,2,3},{5,6,7}};
//     int b[2][3] = {{7,8,9},{8,6,5}};
//     int res[2][3] ;
//     for(int i =0; i<2; i++) {
//         for(int j = 0;j<3; j++) {
//             res[i][j] = a[i][j] + b[i][j];
//         }
//     }
//     for(int i =0; i<2; i++) {
//         for(int j = 0;j<3; j++) {
//             cout<< res[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


//BINA THIRD VARIABLE KE BANAYE HUE ARRAY KO ADD KERNA AUR PRINT KERNA 


// #include<iostream>
// using namespace std ;
// int main() {
//     int a[2][3] = {{1,2,3},{4,5,6}};
//     int b[2][3] = {{1,2,3}, {4,5,6}};

//     for(int i=0; i<2; i++) {
//         for(int j=0;j<3; j++){
//             cout<< a[i][j] + b[i][j] <<" " ;
//         }
//         cout<<endl;
//     }
    
// }


// A KO DIRECT B KE ANDER HI PRINT KER DENA

#include<iostream>
using namespace std;
int main() {
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b [2][3] = {{1,2,3},{4,5,6}};

    for(int i=0; i<2; i++){
        for(int j=0; j <3; j++) {
            cout<< a[i][j] <<" ";
        }
        cout<<endl;
    }
    cout<< endl;
    for(int i=0; i<2; i++){
        for(int j=0; j <3; j++) {
            cout<< b[i][j] <<" ";
        }
        cout<< endl;
    }
    cout<<endl;
    for(int i=0; i<2; i++){
        for(int j=0; j <3; j++) {
            b[i][j]= b[i][j] + a[i][j];
        }
        cout<< endl;
    }
    
    for(int i=0; i<2; i++){
        for(int j=0; j <3; j++) {
            cout<<b[i][j]<<" ";
        }
        cout<< endl;
    }
   
}