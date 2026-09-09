#include<iostream>
using namespace std;

int power(int a ,int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans  =ans*a;

    }
    return ans;
}
int main() {
    int ans = power(2,3);
    cout<<"The final answer is "<< ans<< endl;
    return ans;
}


#include<iostream>
using namespace std;

int EvenNum(int a ){
    if(a%2 == 0){
        cout<<" This is the Even Number"<< endl;
    }else {
        cout<<"Not a Even Number"<< endl;
    }
}
int main() {
    EvenNum(3);
    return 0;
}


  