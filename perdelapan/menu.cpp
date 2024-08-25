#include<iostream>

using namespace std;
int a;
int t;
int p;
int l;

double luas_segitiga(int a, int t){
    return a * t / 2;
}

void input(){
    cout<<"masukkan_alas_segitiga"<<endl;
    cin>>a;
    cout<<"masukkan_tinggi_segitiga"<<endl;
    cin>>t;
    cout<<luas_segitiga(a,t);
}

double persegi_panjang(int p, int l){
    return p * l;
}

void input_2(){
    cout<<"masukkan_panjang_persegipanjang"<<endl;
    cin>>p;
    cout<<"masukkan_lebar_persegipanjang"<<endl;
    cin>>l;
    cout<<persegi_panjang(p,l);
}

int main(){
    int pilih, a, t;

    do {
        cout<<"menghitung_luas_segitiga"<<endl;
        cout<<"1.menghitung_luas_segitiga"<<endl;
        cout<<"2.menghitung_luas_persegipanjang"<<endl;
        cout<<"3.keluar"<<endl;
        cout<<"masukkan_pilihan"<<endl;
        cin>>pilih;
    
        switch(pilih){
            case 1:
                input();
                break;
            case 2:
                input_2();
                break;
            case 3:
                cout<<"exit";
                break;
            default:
                cout<<"pilihan_salah";
                break;
        }
        cout<<endl;
    } while(pilih!=3);

    return 0;
}