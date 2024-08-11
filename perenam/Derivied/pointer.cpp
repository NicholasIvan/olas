#include<iostream>

using namespace std;

int main(){

    int angka = 10;

    int *ptr;

    ptr = &angka;

    cout << angka <<endl;
    cout << &angka <<endl;//16

    cout << ptr <<endl;
    cout <<*ptr <<endl;

    *ptr = 100;

    cout << "perubahan " << angka <<endl;
    return 0;
}