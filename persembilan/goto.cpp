#include<iostream>

using namespace std;

int main(){
    int a = 1;
    mulai_loop:
        cout << a <<endl;
        a++;

    if(a <= 5){
        goto mulai_loop;
    }
    return 0;
}