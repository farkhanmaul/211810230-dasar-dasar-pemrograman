#include <iostream>
using namespace std;

int main(){
	string nik, nama, ttl, jk, gol, alm, rt, kel, kec, agm, sts, pkj, kwr, blk;
	
	cout<<"\n\t\tMasukkan Data Diri Anda :\n"<<endl;
	cout<<"Masukkan NIK\t\t\t = "; cin>> nik;
	cin.ignore();
	cout<<"Masukkan Nama\t\t\t = "; getline(cin, nama);
	cout<<"Masukkan Ttl\t\t\t = "; getline(cin, ttl);
	cout<<"Masukkan Jenis kelamin\t\t = "; cin>> jk;
	cout<<"Masukkan Golongan Darah\t\t = "; cin>> gol;
	cout<<"Masukkan Alamat\t\t\t = "; cin>> alm;
	cout<<"Masukkan RT/RW\t\t\t = "; cin>>rt;
	cin.ignore();
	cout<<"Masukkan Kelurahan\t\t = "; getline(cin, kel);
	cout<<"Masukkan Kecamatan\t\t = "; cin>> kec;
	cout<<"Masukkan Agama\t\t\t = "; cin>> agm;
	cin.ignore();
	cout<<"Masukkan Status Perkawinan\t = "; getline(cin, sts);
	cout<<"Masukkan Pekerjaan\t\t = "; cin>> pkj;
	cout<<"Masukkan Kewarganegaraan\t = "; cin>>kwr;
	cin.ignore();
	cout<<"Masukkan Masa Berlaku\t\t = "; getline(cin, blk);
	system("cls");
	cout<<"\n+========================================================+"<<endl;
	cout<<"||\t\t   PROVINSI JAWA TENGAH\t\t\t||"<<endl;
	cout<<"||\t\t  KABUPATEN BANJARNEGARA\t\t||\n||\t\t\t\t\t\t\t||\n";
	cout<<"|| NIK\t\t\t : "<<nik<<"\t\t||"<<endl;
	cout<<"|| Nama\t\t\t : "<<nama<<"\t||"<<endl;
	cout<<"|| Tempat/Tgl Lahir\t : "<<ttl<<"\t||"<<endl;
	cout<<"|| Jenis kelamin\t : "<<jk;
	cout<<"     Gol. Darah : "<<gol<<"\t||"<<endl;	
	cout<<"|| Alamat\t\t : "<<alm<<"\t\t\t||"<<endl;
	cout<<"|| \tRT/RW\t\t : "<<rt<<"\t\t\t||"<<endl;	
	cout<<"|| \tKel/Desa\t : "<<kel<<"\t\t||"<<endl;
	cout<<"|| \tKecamatan\t : "<<kec<<"\t\t\t||"<<endl;	
	cout<<"|| Agama\t\t : "<<agm<<"\t\t\t||"<<endl;
	cout<<"|| Status Perkawinan\t : "<<sts<<"\t\t\t||"<<endl;	
	cout<<"|| Pekerjaan\t\t : "<<pkj<<"\t\t||"<<endl;
	cout<<"|| Kewarganegaraan\t : "<<kwr<<"\t\t\t\t||"<<endl;	
	cout<<"|| Berlaku Hingga\t : "<<blk<<"\t\t\t||"<<endl;
	cout<<"+========================================================+"<<endl;	
}
