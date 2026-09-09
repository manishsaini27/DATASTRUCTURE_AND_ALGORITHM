#include<iostream>
using namespace std;

char Tolowercase(char ch){
    if(ch>= 'a' && ch <='z'){
        return ch;
    }else {
        int temp = ch - 'A' + 'a';
        return temp ;
    }
}

int lengthofString(char ch[] ){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}
bool checkPalindrome(char ch[], int n){
    int s= 0;
    int e = n-1;
    while(s<n) {
        if(Tolowercase(ch[s]) != Tolowercase(ch[e])){
            return 0;

        }else{
            s++;
            e--;
        }

    }
    return 1;
}
int main() {
    char ch[20];
    cout<<"Enter the name" << endl;
    cin>> ch;
    int length  = lengthofString(ch);
    cout<<"Palindrome or not "<< checkPalindrome(ch, length);
}