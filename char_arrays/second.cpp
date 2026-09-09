#include<iostream>
using namespace std;
int lengthOfName( char name[]){
    int count = 0;
    for(int i = 0 ; name[i]!= '\0' ; i++){
        count++;
    }
    return count;
}
int main () {
    char name[100];
    cout<<"Enter the Name " << endl;
    cin>>name;
    cout<< "Length" << lengthOfName(name) << endl;
}