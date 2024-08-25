#include<iostream>

using namespace std;

int main(){
    int pilih;

    cout<<"1"<<endl;
    cout<<"2"<<endl;
    cout<<"3";
    cin>>pilih;

    switch(pilih){
        case 1:
            cout<<"pilihan_1";
            break;
        case 2:
            cout<<"pilihan_2";
            break;
        case 3:
            cout<<"pilihan_3";
            break;
        default:
            cout<<"pilihan_salah";
            break;
    }
    return 0;
}