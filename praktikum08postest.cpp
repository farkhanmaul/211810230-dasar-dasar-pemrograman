#include <iostream>
#include <string>
using namespace std;

struct data {
	string kode;
	string judul;
	float harga;
};
int main() {
	int n, total; 
	cout << "Masukkan jumlah buku : ";
	cin >> n;
	cout<<"\n === Input Data Buku ==="<< endl;
	struct data buku[n];
	for (int i = 0; i < n; i++) {
		cout << " Buku ke-" << i+1 << endl;
		cout << "  Masukkan kode buku\t: "; cin>> buku[i].kode;
		cin.ignore();
		cout << "  Masukkan judul buku\t: "; getline(cin, buku[i].judul);
		cout << "  Masukkan harga buku\t: "; cin >> buku[i].harga;
		cout << endl;
	}
	cout << endl;
	cout << "  === Data Buku ==="<<endl;
	for (int i = 0; i < n; i++) {
		cout << " Buku ke-" << i+1 << endl;
		cout << " Kode buku\t: " << buku[i].kode << endl;
		cout << " Judul Buku\t: " << buku[i].judul << endl;
		cout << " Harga buku\t: " << buku[i].harga << endl << endl;
		total += buku[i].harga;
	}
	cout << "Total harga buku : " << total <<endl;
	return 0;
}
