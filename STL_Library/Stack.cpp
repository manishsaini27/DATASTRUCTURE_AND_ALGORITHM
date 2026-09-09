#include<iostream>
#include<stack>
using namespace std ;
int main(){
     stack<string> s;

     s.push("Manish");
     s.push("Kumar");
     s.push("saini");

     cout<< "Top Element ->" << s.top() << endl;
     // iska ans top per jo element hoga we aayega yha per saini hoga top ka element....

     s.pop() ;
     cout<<"Top element " << s.top() << endl;

     cout<<"Size of stack " << s.size() << endl;
     cout<< "Empty or not " << s.empty () << endl;
}

