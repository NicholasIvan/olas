#include<iostream>

using namespace std;

int main(){
    for(int a = 1; a <= 10; a++){
        if(a % 2 != 0){
            cout << a << endl;
            continue;
        }
        cout << a << endl;
    }
    return 0;
}