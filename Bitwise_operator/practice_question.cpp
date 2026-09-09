// #include<iostream>
// using namespace std ;
// int main(){
//     for(int  i =0; i<=5 ; i--){
//         cout<< i<< " ";
//         i++;
//     }
// }

// yequestion infinity loop print ker dega   

#include<iostream>
using namespace std ;
int main() {
    for(int i=0 ; i<=15 ; i+= 2) {
        cout<< i << " ";
        if (i& 1) {
            continue ; 
        }
        i++;
    }
}