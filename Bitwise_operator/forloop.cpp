#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "enter the value of N"<< endl;
    cin>> n;
    for(int i=1;i<=n;i++){
        cout<< i << endl;
    }

}


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the number of n"<< endl;
    cin>> n;
    int i = 1;
    for(; ;){
        if(i<=n){
            cout<< i << endl;
            
        }
        else{
            break;
        }
        i++;
        
    }
}



#include<iostream>
using namespace std;
int main (){
    for(int a= 3,b=5 ; a>=0 && b>=1 ; a--,b--){
        cout<<a <<" " <<b << endl;
    }
}



#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<< " ENter the value of N"<< endl;
    cin>> n;
    int sum = 0;

    for (int i = 1; i<=n;i++){
        sum +=i;
        
    }
    cout<< sum << endl;
}