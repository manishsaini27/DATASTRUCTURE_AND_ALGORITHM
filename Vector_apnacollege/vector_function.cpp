// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {
//     //SIZE:

//     vector<int > vec = {1,2,3,4,5,6,7};
//     cout<< "The size of Vector = " << vec.size() << endl;

//     //PUSH_BACK:
//     vector<char> sect= {};
//     sect.push_back(25);
//     sect.push_back(35);
//     sect.push_back(45);
//     cout<< "after push back size =" << sect.size() << endl;


//     // POP_BACK
//     sect.pop_back();
//     for(int i: sect) {
//         cout<< i << endl;
//     }

//     cout<<"after pop back the size of the vector is " << sect.size() << endl;

    


//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std ;
int main() {
    vector<int> ektara = {1,2,3,4,5,6,7};
    cout<< ektara.front() << endl;
    // print the first value of the vector

    cout<< ektara.back() << endl;

    // print the last value of the vector;
}
