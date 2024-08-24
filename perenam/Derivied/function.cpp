#include<iostream>

using namespace std;

int tambah(int a, int b){
    return a + b;
}

int kurang(int a, int b){
    return a - b;
}

int kali(int a, int b){
    return a * b;
}

int bagi(int a,int b){
    return a / b;
}

void bagi(){
    int a = 2;
    int b = 2;

    int c = a / b;
    cout << c << endl;

}

int main(){
    int hasiltambah;
    int hasilkurang;

    hasiltambah = tambah(1, 2);
    hasilkurang = kurang(2, 1);
    
    cout << hasiltambah << endl;
    cout << hasilkurang << endl;
    bagi();
    return 0;
}