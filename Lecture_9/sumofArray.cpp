// #include<iostream>
// using namespace std; 
 
// int sumofarray(int arr[] , int n ){
//     int sum = 0;
//     for(int i = 0; i<n ; i++){
//         sum  = sum + arr[i];
      
//     }
//     cout<< sum << endl;         // yha per bhi cout ker skte hai ,/...
//     return sum;
// }
// int main() {
//     int array[5] = {2,3,4,5,6};
//     sumofarray(array , 5) ;
//     return 0 ;
// }


#include<iostream>
using namespace std; 
 
int sumofarray(int arr[] , int n ){
    int sum = 0;
    for(int i = 0; i<n ; i++){
        sum  = sum + arr[i];
      
    }

    return sum;
}
int main() {
    int array[5] = {2,3,4,5,6};
    cout<<  sumofarray(array , 5);
    return 0 ;
}