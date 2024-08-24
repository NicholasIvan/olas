#include<iostream>

using namespace std;


class Segitiga{
    private:
    int alas;
    int tinggi;
    public:
    Segitiga(int a, int t): alas(a), tinggi(t){}
    int getalas(){
        return alas;
    }
    int gettinggi(){
        return tinggi;
    }
    int rumus(){
        return alas*tinggi/2;
    }
};

class PersegiPanjang{
    private:
    int panjang;
    int lebar;
    public:
    PersegiPanjang(int p, int l): panjang(p), lebar(l){}
    int getpanjang(){
        return panjang;
    }
    int getlebar(){
        return lebar;
    }
    int rumus(){
        return panjang*lebar;
    }
};

class Kubus{
    private:
    int panjang;
    int lebar;
    int tinggi;
    public:
    Kubus(int pk, int lk, int tk): panjang(pk), lebar(lk), tinggi(tk){}
    int getpanjang(){
        return panjang;
    }
    int getlebar(){
        return lebar;
    }
    int gettinggi(){
        return tinggi;
    }
    int rumus(){
        return panjang*lebar*tinggi;
    }
};
int main(){
Segitiga s(4,5);
cout<<s.rumus()<<endl;
PersegiPanjang pp(3,7);
cout<<pp.rumus()<<endl;
Kubus k(2,4,3);
cout<<k.rumus();
    return 0;
}