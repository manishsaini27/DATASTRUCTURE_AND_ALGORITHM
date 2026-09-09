#include<iostream>
using namespace std ;

int searchthenum(int arr[], int size, int key) {
    for(int i = 0; i<size  ; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main () {
    int n;
    cout<< "Enter size of the array" <<endl;
    cin >> n;

 

    int arr [100] ;
    for (int i=0; i<n; i ++ ){
        cin>> arr[i];

    }

     int key;
    cin >> key;
    int result = searchthenum(arr ,n ,key);


    if( result != -1){
        cout<< " the element at the index number " << result << endl;

    }else {
        cout<< " the number is not in the array " << endl;
    
    }
    return 0;
}


//USING BOOL 

#include<iostream>
using namespace std ;
bool findnumber(int arr[],int size , int key){
    for(int i=0; i<size; i++){
        if( arr[i] == key){
            return true;
        }
    }
    return false;

}
int main() {
    int n;
    cout<< "Enter the size of the array" << endl;
    cin >> n;
    int arr[100];
    for(int i= 0;i< n; i++) {
        cin >> arr[i];
    }
    int key;
    cin>> key;

    if(findnumber(arr,n,key)){
        cout<< "Number is found " << endl;
    }
    else{
        cout<< "Number is not found " << endl;
    }
    return 0;
}