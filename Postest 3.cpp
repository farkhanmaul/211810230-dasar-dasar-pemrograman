#include <iostream>
using namespace std;

int main (){
	int a;
	float c, f, r, k;
	
	cout<< "============================="<<endl;
	cout<< "||  PROGRAM KONVERSI SUHU  ||"<<endl;
	cout<< "=============================\n"<<endl;
	cout<< "Menu Pilihan :"<<endl;
	cout<< "1. Konversi Celcius ke Fahrenheit"<< endl;
	cout<< "2. Konversi Celcius ke Kelvin"<< endl;
	cout<< "3. Konversi Celcius ke Reamur"<< endl;
	cout<< "====================================="<<endl;
	cout<< "Masukkan Pilihan (1-3) : "; 
	cin >> a;
	cout<< "Masukkan Nilai Celciusnya = "; 
	cin >> c;
	switch (a){
	case 1 :
		f = c*9/5 + 32;
		cout << "Nilai Fahrenheit = " << f ;
		break;
	
	case 2 :
		k = c + 273;
		cout << "Nilai Kelvin = " << k ;
		break;
	
	case 3 :
		r = c * 4/5;
		cout << "Nilai Reamur = " << r ;
		break;
	
	}
}
