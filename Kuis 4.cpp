#include <iostream>
using namespace std;

int akumulasi(int bulan, int total){
	int pengunjung = 20;
	for (int a = bulan; a>0; a--){
		total+=pengunjung;
	}
	cout << "\n Pengunjung selama "<<bulan<<" bulan ada = ";
	return total;
}
	
int main(){
	int bulan;
	cout << " =======================================" << endl;
	cout << " || Akumulasi pengunjung suatu museum ||" << endl;
	cout << " =======================================" << endl<<endl;
	cout << " Pengunjung = 20 orang per bulan" << endl;
	cout << " Akumulasi pengunjung dari bulan ke = ";
	cin >> bulan;
	cout << endl;
	cout << akumulasi(bulan,0);
	cout << " pengunjung."<<endl;
}
