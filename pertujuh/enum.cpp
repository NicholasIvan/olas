#include<iostream>

using namespace std;

enum jenis{
    SEGITIGA,
    PERSEGI_PANJANG
};

class BangunRuang{
    private:
        jenis type;
        int angka1;
        int angka2;

    public:
        BangunRuang(jenis t, int a, int b): type(t), angka1(a), angka2(b){}
            int rumus(){
                if(type==SEGITIGA){
                    return (angka1*angka2)/2;
                    }
                else if(type==PERSEGI_PANJANG){
                    return (angka1*angka2);
                    }
                return 0;
            }
            int getangka1(){
                return angka1;
            }
            int getangka2(){
                return angka2;
            }
            jenis getjenis(){
                return type;
            }
};
int main(){
    BangunRuang s(SEGITIGA,4,5);
    cout<<s.rumus()<<endl;
    BangunRuang pp(PERSEGI_PANJANG,3,6);
    cout<<pp.rumus();
    return 0;
}