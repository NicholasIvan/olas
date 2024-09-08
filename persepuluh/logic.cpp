#include<iostream>

using namespace std;

int main(){
    bool a = false;
    bool b = true;
    bool c = false;

    bool hasil_and = a && b && c;
    bool hasil_or = a || b || c;
    cout << hasil_and << endl;
    cout << hasil_or;
    return 0;
}