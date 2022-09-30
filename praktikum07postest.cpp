#include <iostream>
#include "library.h"
using namespace std;

int main(){
    int a,b,t;
    float total=0;
    cout << "MENGHITUNG LUAS BANGUN" << endl << endl;
    cout << "1. Trapesium" << endl;
    cout << "Masukkan sisi a(cm) = "; cin >> a;
    cout << "Masukkan sisi b(cm) = "; cin >> b;
    cout << "Masukkan tinggi(cm) = "; cin >> t;
    cout << "Luas Trapesium = " << luasTrapesium(a,b,t) << " cm" << endl << endl;
    total += luasTrapesium(a, b, t);

    cout << "2. Persegi Panjang" << endl;
    cout << "Masukkan panjang(cm) = "; cin >> a;
    cout << "Masukkan lebar(cm) = "; cin >> b;
    cout << "Luas Persegi Panjang = " << luasPersegiPanjang(a,b) << " cm" << endl << endl;
    total += luasPersegiPanjang(a, b);

    cout << "3. Persegi" << endl;
    cout << "Masukkan panjang sisi(cm) = "; cin >> a;
    cout << "Luas Persegi = " << luasPersegi(a) << " cm" << endl << endl;
    total += luasPersegi(a);

    cout << "4. 1/4 Lingkaran" << endl;
    cout << "Masukkan panjang jari-jari(cm) = "; cin >> a;
    cout << "Luas 1/4 Lingkaran = " << luasLingkaran(a) << " cm" << endl << endl;
    total += luasLingkaran(a);

    cout << "Luas total seluruh bangun = " << total << " cm";
    return 0;
}
