#include <iostream>
using namespace std;

int main(){
	int angka, pangkat;
	int hasil = 1;
	
	cout<<"\t=================================="<<endl;
	cout<<"\t||\tBILANGAN BERPANGKAT\t||"<<endl;
	cout<<"\t=================================="<<endl;
	cout<<"Masukkan nilai A : ";
	cin>>angka;
	cout<<"Masukkan Pangkat : ";
	cin>>pangkat;
	cout<<"- - PROSES MENGHITUNG - -"<<endl;
	cout<<"Hasil"<<endl;
	
	for (int a=1; a <= pangkat; a++){
		hasil = hasil * angka;
	}
	for (int b=1; b <= pangkat-1; b++){
		cout <<angka<< " x ";
	}
	cout<< angka<< " = " <<long (hasil) <<endl;
	cout<<"============================"<<endl;
	if (hasil %2 == 0){
		cout<<"Dan "<<hasil<<" termasuk bilangan genap"<<endl;
	}
	else{
		cout << "Dan "<<hasil<<" termasuk bilangan ganjil"<<endl;
	}
}
