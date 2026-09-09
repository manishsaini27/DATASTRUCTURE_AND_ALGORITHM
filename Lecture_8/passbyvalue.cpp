#include<iostream>
using namespace std ;

void dummy(int n) {
    n++;
    cout<< "n is" << n << endl;
}

int main() {
    int n;
    cin>> n;
    dummy(n);
    cout<< "number n is" << n << endl;

    return 0;

}

//OUTPUT:
// 7
// n is8
// number n is7

// yha per hame n =7 diya hai fir jab funtion call hua to dummy me n++ tha jiska matlab tha 7=> 8 ho gya per jab hamne main me n ko print keraya to n ki value 7 hi aayi
// kuki main me jo n hai we apni ek copy deta hai funtion ko aur function usper operation kerta hai aur result deta hai aur main me jo n ki value hai we same hi rehti hai 


#include<iostream>
using namespace std ;
int update (int a){
    a-=5;
    return a;

}
int main() {
    int a = 15;
    update(a);
    cout<< a << endl;
}

