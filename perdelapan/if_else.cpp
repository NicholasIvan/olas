#include<iostream>

using namespace std;

int main(){
    int pilih;

    cout<<"1"<<endl;
    cout<<"2"<<endl;
    cout<<"3";
    cin>>pilih;
    if(pilih==1){
        cout<<"pilihan_1";
    }
    else if(pilih==2){
        cout<<"pilihan_2";
    }
    else if(pilih==3){
        cout<<"pilihan_3";
    }
    else {
        cout<<"pilihan_salah";
    }
    return 0;
}