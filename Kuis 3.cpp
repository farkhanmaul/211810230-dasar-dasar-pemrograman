#include <iostream>
#include <fstream>
using namespace std;

int main() {
	int batas;
	
	ofstream keluar;	
	cout << "Masukkan batas tinggi : ";
	cin >> batas;
	cout << endl;
	
	keluar.open("data.txt", ios::out); // out = overwrite, app = append (nambah/gabungkan)
	keluar << "Output Gambar" << endl << endl;
	for (int i=batas; i > 0; i--) {
		for (int j=1; j < i; j++){
			keluar << " ";
		}
		for (int j=2*batas-1; j >= 2*i-1; j--) {
			keluar << i;
		} keluar << endl;
	}
	for (int i=2; i <= batas; i++) {
		for (int j=1; j < i; j++){
			keluar << " ";
		}
		for (int j=2*batas-1; j >= 2*i-1; j--) {
			keluar << i;
		} keluar << endl;
	} 
	
	keluar.close();
	string msk;
	ifstream masuk("data.txt"); //ifstream = membaca datanya 
	
	if(masuk.is_open()){
		while(getline(masuk,msk)){
			cout<<msk<<endl;
		}
		masuk.close();
	}
	else{
		cout<<"gagal";
	}
	return 0;
}

//ifstream untuk membaca
//ofstream untuk menulis
