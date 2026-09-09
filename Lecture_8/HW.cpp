// #include<iostream>
// using namespace std;

// int AP(int n){
//     int ap = ((3*n)+7);
//     cout<< "The Ap of the number is " << ap << endl;
// }

// int main() {
//     int n;
//     cin>> n;
//     AP(n);
//     return 0;
// }


// #include<iostream>
// using namespace std ;

// int Countsetbits(int n){
//     int count =0;
//     while(n!=0){
//         if(n&1){
//             count++;
            
//         }
//         n = n>>1;
//     }
   
//     return count;
// }

// int main() {
//     int a;
//     cout<< "enter the value of a" << endl;
//     cin>> a;
//     int b;
//     cout<< "enter the value of b" << endl;
//     cin>> b;

//     int Numberofsetbits  = Countsetbits(a) + Countsetbits(b);
//     cout<< Numberofsetbits << endl;
    
// }



#include<iostream>
using namespace std ;

int thenthterm(int n){
    int a= 0;
    int b = 1;
    for(int i = 3;i<=n; i++){
        int nextnumber = a+ b;
        a= b;
        b = nextnumber;

    }
    return b;
}
int main () {
    int n;
    cout<<" Enter the number of term" << endl;
    cin>> n;
    cout<< "the " << n <<"th term is " <<thenthterm(n) << endl;
    return 0;
}