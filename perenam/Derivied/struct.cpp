#include<iostream>
#include<string>

using namespace std;

struct Mahasiswa {
    string nama;
    int nilai;
};

int main(){

//declare that
    Mahasiswa data[3]={
        {"jono", 80},
        {"joni", 90},
        {"edi", 100}
    };
//tampilkan data
    cout<<"List Data: \n";
    for (int i = 0; i < 3; i++){
        cout << "Nama : " << data[i].nama << " Nilai : " << data[i].nilai <<endl;
    }
    return 0;
}