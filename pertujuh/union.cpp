#include<iostream>

using namespace std;

enum jenis{
    SEGITIGA,
    PERSEGI_PANJANG
};

class BangunRuang{
    private:
        jenis type;
        union {
            struct {
                int alas;
                int tinggi;
            } segitiga;
            struct {
                int panjang;
                int lebar;
            } persegi_panjang;
        };
    public:
        BangunRuang(int a,int t) : type(SEGITIGA){
            segitiga.alas=a;
            segitiga.tinggi=t;
        }
        BangunRuang(int p, int l, jenis t) : type(t){
            persegi_panjang.panjang=p;
            persegi_panjang.lebar=l;
        }
        int rumus(){
                if(type==SEGITIGA){
                    return (segitiga.alas*segitiga.tinggi)/2;
                    }
                else if(type==PERSEGI_PANJANG){
                    return (persegi_panjang.panjang*persegi_panjang.lebar);
                    }
                return 0;
            }
            jenis getjenis(){
                return type;
            }
};
int main(){
    BangunRuang segitiga(4,5);
    cout<<segitiga.rumus()<<endl;
    BangunRuang persegi_panjang(3,4,PERSEGI_PANJANG);
    cout<<persegi_panjang.rumus();
    return 0;
}