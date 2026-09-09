//vector syntax 

// vector<int> vec ;
// vector<int> vec = {1,2,3}
// vector<int> vec(3,0)  (size of the vector , the value each index have)


// #include<iostream>
// #include<vector>
// using namespace std ;
// int main() {
//     vector<int> vec = {1,2,3};
//     cout<< vec[0] << endl;

//     return 0 ;
// }


// #include<iostream>
// #include<vector>
// using namespace std ;
// int main() {
//     vector<int> vec(5,0);
//     // cout<< vec[0] << endl;
//     // cout<< vec[1] << endl;
//     // cout<< vec[2] << endl;
//     // cout<< vec[3] << endl;
//     // cout<< vec[4] << endl;

//     for(int i : vec) {   // i index ki value store kerega yha per 
//         cout<< i << endl;
//     }

//     return 0 ;
// }



#include<iostream>
#include<vector>

using namespace std ; 
int main(){
    vector<char> vec ={'a','b','c','d'}; 

    for(char val :vec){   // for each loop 
        cout<< val << endl;
    }
    return  0;
}