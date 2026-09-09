#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size -1;
    int mid = start +(end-start)/2;
    while(start<=end) {
        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
        mid = start +(end-start)/2;
    }
    return -1;
}
int main () {
    int evenarray[6] ={2,3,4,5,6,7};
    int oddarray[7]= {1,2,3,4,5,6,7};
    int evenindex = BinarySearch(evenarray,6,7);
    cout<< "KEy at evenarray" << evenindex << endl;

    int oddindex = BinarySearch(oddarray,7,5);
    cout<< "Key at oddarrya" << oddindex << endl;

}