#include<iostream>
#include<array>
using namespace std;
int main() {
    int basic[3] = {1,2,3};

    array<int,4> a ={1,2,3,4};
    int size =  a.size();

    for(int i = 0;i<size;i++) {
        cout<< a[i] << endl;
    }
    cout<< "Element at 2nd index->"<<a.at(2)<< endl;
    // ye 2index per present element dega 

    cout<<"Empty or not ->" << a.empty() << endl;
    // ye mere ko boolean dega o or 1
    
    cout<< "The first element in the array is " << a.front() << endl;

    cout<< "The last element in the array is " << a.back() << endl;
}