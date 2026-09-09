#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(33);
    v.push_back(55);
    v.push_back(88);
    v.push_back(99);

    // binary search use kerne ke liye element sorted order me hona chaiye..

    cout<< binary_search(v.begin(),v.end() ,5) << endl;

    // because isme 5 nhi hai isliye ye false return kerega yani ki 0.
    cout<< binary_search(v.begin(),v.end() ,88) << endl;

    cout<< "Finding 55-> " <<binary_search(v.begin(), v.end(),55) << endl;

    // ye 55 hai ya nhi we return kerega 

    auto lb = lower_bound(v.begin(), v.end(), 88);
    cout << lb - v.begin() << endl;


    auto ub = upper_bound(v.begin(), v.end(), 99);
    cout << ub - v.begin()<< endl;

    // Lower_bound-Definition: First position jahan value 4 ya usse badi ho.

    // Upper_bound :Definition: First position jahan value 4 se badi ho.

    int a  = 3;
    int b = 5;

    cout<< "max->" << max(a,b)<< endl;
    cout<<"min->"<< min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a->" <<a<< endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"abcd->"<<abcd << endl;

    
    
    
    
    rotate(v.begin(),v.begin()+1,v.end()); // kha se kha tak element rotate kerna hai we btana hota hai ..
    // yha hamne 1 ko rotate kiya hia ...
    cout<<"After rotateting "<< endl;

    for(int i:v){
        cout<<i<<" "<< endl;
    }
    cout<< endl;


    sort(v.begin(), v.end());
    for(int i:v) {
        cout<< i<< " " << endl;
    }



}