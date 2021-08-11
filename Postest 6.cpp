#include <iostream>
using namespace std;

int volumebalok(int p,int l,int t){
	int v=p*l*t;
	return v;
}
int luaspermukaan(int p,int l,int t){
	int L = 2*(p * l + p * l + l * t);
	return L;	
	}
int kelilingbalok(int p,int l,int t){
	int K = 4 * (p + l + t);
	return K;
	}
void volumebola(float phi,float r){
		float vb = phi * r * r * r * 4/3;
		cout<<"Volume bola :"<<vb<<endl;
	}
void luasPbola(float phi,float r){
		float luas = 4 * phi * r * r;
		cout<<"Luas permukaan bola :"<<luas<<endl;
	}

	int main (){	
		int pilihan;
		cout << "1.Balok" <<endl;
		cout << "2.Bola" <<endl;
		cout << "Masukkan pilihan : ";
		cin >> pilihan;
		cout << endl;
		if (pilihan == 1){
			int p, l, t ;
			cout << "Masukan panjang balok : ";
			cin  >> p;
			cout << "Masukan lebar balok : ";
			cin  >> l;
			cout << "Masukan tinggi balok : ";
			cin  >> t;
			cout << endl;
			cout << "Volume balok : "<< volumebalok(p, l, t)<<endl;
			cout << "Luas permukaan balok : "<< luaspermukaan(p, l, t)<<endl;
			cout << "Keliling balok : "<< kelilingbalok(p, l, t)<<endl; ;
		}
		else{
			float jari,phi;
			phi = 3.14;
			cout << "Masukan jari jari bola : ";
			cin  >> jari;
			cout << endl;
			volumebola(phi, jari);
			luasPbola (phi, jari);
		}
	return 0;
}	
