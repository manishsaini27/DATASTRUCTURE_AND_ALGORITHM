// #include<iostream>
// using namespace std;
// int main() {
//     int ch = '1';
//     cout<< endl;
//     switch(ch){
//         case 1: cout<<"first" << endl;
//         break;
//         case '1': cout<<"charcter " << endl;
//         break;
//         default: cout<< "it is default case" << endl;
//     }
// }


// #include<iostream>
// using namespace std;
// int main() {
//     char ch = '1';
//     int num = 1;
//     cout<< endl;
//     switch(ch){
       
//         case 1: cout<< "First "<< endl;
//                   cout<< "First again" << endl;
//         break;
//         case '1' : switch(num){
//             case 1: cout<< "Value of num is"<< num<< endl;
//             break;
//         }
//         default: cout<< "it is default case" << endl;
//     }
// }


// // SWITCH STATEMENT KE ANDER HAM CONTINUE KA USE NHI KER SKTE HAI KUKI CONTINUE ONLY LOOP KE ANDER WORK KERTA HAI ,SWITCH ME NHI

// // AUR AGAR SWITCH LOOP KE ANDER HOTA TO VALID HOTA YE 

// #include<iostream>
// using namespace std ;
// int main(){

//     int n=5;

//     for(int i =0; i<=5;i++){
//          switch(i){
//             case 2:
//             continue;
//          }
//          cout<< i<<" ";
//     }
// }


// Question : 1330 me kitne 100 ,50,20,1 ke notes hai gin ke btao...


#include<iostream>
using namespace std;
int main() {
    int amount  = 1330;
    int Rs100,Rs50,Rs20,Rs1;
    switch(1){
        case 1: 
        Rs100 = amount/100;
        amount = amount %100;
        cout<< "The number of 100Rs notes is " << Rs100 << endl;
        
        Rs50 = amount/50;
        amount = amount %50;
        cout<< "The number of 50Rs notes is " << Rs50 << endl;

        Rs20 = amount/20;
        amount = amount %20;
        cout<< "The number of 20Rs notes is " << Rs20 << endl;

        Rs1 = amount/1;
        amount = amount %1;
        cout<< "The number of 1Rs notes is " << Rs1 << endl;

        return 0;

    }
 }

 // we use only one case - case 1 ,because if we use 4 cases then we had to use the break ,which stops the other operation in the queue .