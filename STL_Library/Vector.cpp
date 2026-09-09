#include<iostream>
#include<vector>

using namespace std;
int main() {
    vector<int> a(5,1);

    //vector<int> a[5,1];[size,element in all vector is same]

    vector<int> last(a);
    cout<< "Print last " << endl;
    for(int i:last){
        cout<< i << " ";
    }
    vector<int> v;
    cout<< "Capacity " << v.capacity() << endl;

    v.push_back(1);
    cout<< "Capacity " << v.capacity() << endl;
    v.push_back(2);
    cout<<"Capacity" << v.capacity() << endl;
    v.push_back(3);
    cout<<"Capacity" << v.capacity() << endl;
    // jaise hi vector me third element dalne gye usne apna size double ker liya
    cout<< "Size" << v.size() << endl;

    cout<< "Element at 2nd index " << v.at(2)<< endl;

    cout<<"Front " << v.front() << endl;
    cout<< "Back" << v.back() << endl;

    cout<< "befor pop" << endl;
    for(int i : v) {
        cout<< i << " " ;
    }
    cout<< endl;

    v.pop_back();

    cout<<"after pop " << endl;
    for(int i:v) {
        cout<< i<<" ";
    }
    cout<< endl;

    cout<<"Before clear size " << v.size() << endl;
    cout<< endl;

    v.clear();
    // vector clear kerne se size to 0 ho jati hai per capacity whi rehti hai.....
    cout<< "After clear size " << v.size() << endl;


}