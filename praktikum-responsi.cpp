#include <iostream>
using namespace std;

int main(){
	int penjualan, bonus;
	int targert = 30000000;
	cout << "Masukkan total penjualan = Rp ";
	cin >> penjualan;
	if(penjualan < 30000000){
		cout<< "Bonus anda Rp 0";
	}
	else if(penjualan >= 30000000 && penjualan <= 40000000){
		bonus = 200000 + (penjualan - target) * 2 / 100;
		cout<<"Bonus anda = Rp "<<bonus;
	}
	else if(penjualan > 40000000 && penjualan <= 50000000){
		bonus = 300000 + (penjualan - target) * 25 / 1000;
		cout<<"Bonus anda = Rp "<<bonus;
	}
	else if(penjualan > 50000000){
		bonus = 500000 + (penjualan - target) * 3 / 100;
		cout<<"Bonus anda = Rp "<<bonus;
		}
	return 0;
}
