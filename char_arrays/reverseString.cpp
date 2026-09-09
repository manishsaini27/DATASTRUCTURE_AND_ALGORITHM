#include<iostream>
using namespace std;

void reversestring(char Name[], int n){
    int s = 0;
    int e = n - 1;

    while(s < e){
        swap(Name[s], Name[e]);
        s++;
        e--;
    }
}

int lengthOfName(char Name[]){
    int count = 0;
    for(int i = 0; Name[i] != '\0'; i++){
        count++;
    }
    return count;
}

int main() {
    char Name[20];

    cout << "Enter the Name: ";
    cin >> Name;

    int length = lengthOfName(Name);

    reversestring(Name, length);

    cout << "Reversed String: " << Name << endl;

    return 0;
}