//Terdapat struct untuk menyimpan data koordinat pada bidang dua dimensi dengan data:
//koordinat x, koordinat y, dan nama titik. Data yang dimasukkan sebanyak tiga titik A(xa, yb), B(xb,yb), dan C(xc,yc) 
//dimana A, B, dan C adalah nama titik, xa, xb, xc berupa angka koordinat x, dan ya,yb, yc berupa angka koordinat y.
//Buatlah structnya dan dari ketiga titik tersebut carilah jarak masing-masing antar titik (jarak AB,
//jarak AC, dan jarak BC) dan tampilkan jarak terpendek dari ketiga titik tersebut!

#include<iostream>
using namespace std;

struct titik {
    int x;
    int y;
};

int main() {
    struct titik koordinat;
    koordinat.x = 1;
    koordinat.y = 6;
    cout<<"Koordinat Titik Adalah = \n X : "<< koordinat.x <<" \n Y : "<< koordinat.y;
}
