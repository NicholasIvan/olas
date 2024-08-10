#include<iostream>
#include<string>
using namespace std;

int main(){
    int umur;
    char jk;
    string nama;
    float cicilan;
    double penghasilan;
    bool benar=true;
    bool salah=false;

    //jabaran_variabel
    umur=30;
    jk='l';
    nama="john";
    penghasilan=100;
    cicilan=50;

    //data dasar
    cout<<umur<<endl;
    cout<<jk<<endl;
    cout<<nama<<endl;
    cout<<"pilihan(0 atau 1)";
    cin>>benar;
    //penerapan_implementasi_bool
    if (benar){
        cout<<penghasilan<<endl;
    }else{
        cout<<cicilan<<endl;
    }
    return 0;
}