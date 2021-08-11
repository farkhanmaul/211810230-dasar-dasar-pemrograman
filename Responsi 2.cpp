#include <iostream>
#include <string>
using namespace std;

struct data {
	string norekam, tanggal, nik, nama, jkel, alamat, diagnosa;
	int usia, biayapen, biayapem, biayaobat, total;
	};

int main(){
	int n; 
	cout << "Masukkan jumlah pasien : "; cin >> n;
	cout<<"\n === Input Data Pasien ==="<< endl;
	struct data pasien[n];
	for (int i = 0; i < n; i++) {
		cout << " Pasien ke-" << i+1 << endl;
		cout << "  No Rekam medis: "; cin>> pasien[i].norekam;
		cin.ignore();
		cout << "  Tanggal\t: "; getline(cin, pasien[i].tanggal);
		cout << "  NIK\t\t: "; cin>> pasien[i].nik;
		cin.ignore();
		cout << "  Nama\t\t: "; getline(cin, pasien[i].nama);
		cout << "  Usia\t\t: "; cin>> pasien[i].usia;
		cout << "  Jenis Kelamin\t: "; cin>> pasien[i].jkel;
		cout << "  Alamat\t: "; cin>> pasien[i].alamat;
		cout << "  Diagnosa\t: "; cin>> pasien[i].diagnosa;
		cout << "  Biaya pendaftaran\t: "; cin>> pasien[i].biayapen;
		cout << "  Biaya pemeriksaan\t: "; cin>> pasien[i].biayapem;
		cout << "  Biaya obat\t\t: "; cin>> pasien[i].biayaobat;
		cout << endl;
	}
	cout << endl;
	
	cout << "  === Data Pasien ==="<<endl;
	for (int i = 0; i < n; i++) {
		cout << " Pasien ke-" << i+1 << endl;
		cout << "  No Rekam medis: "<< pasien[i].norekam<< endl;
		cout << "  Tanggal\t: "<< pasien[i].tanggal<< endl;
		cout << "  NIK\t\t: "<< pasien[i].nik<< endl;
		cout << "  Nama\t\t: "<< pasien[i].nama<< endl;
		cout << "  Usia\t\t: "<< pasien[i].usia<< endl;
		cout << "  Jenis Kelamin\t: "<< pasien[i].jkel<< endl;
		cout << "  Alamat\t: "<< pasien[i].alamat<< endl;
		cout << "  Diagnosa\t: "<< pasien[i].diagnosa<< endl;
		
		pasien[i].total = pasien[i].biayapen + pasien[i].biayapem + pasien[i].biayaobat;
		cout<<"  Total pembayaran :"<<pasien[i].total<<endl<<endl;
	}
	
	int pass, max=0;
	for(int i = 0; i < n; i++) {
    if (pasien[i].total > max)  {
      max = pasien[i].total;
      pass = i+1;
    }
	}
	cout << " Biaya tertinggi adalah " << max << " yaitu pasien ke-" << pass << endl;
	return 0;
	}
