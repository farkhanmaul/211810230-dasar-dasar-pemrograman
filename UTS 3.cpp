#include <iostream>
using namespace std;

int main(){
	int denda;
	
	cout<< "Pelanggaran :"<<endl;
	cout<< "1. Lampu sepeda motor tidak menyala atau spion tidak ada"<<endl;
	cout<< "2. Tidak menggunakan helm"<<endl;
	cout<< "3. Tidak membawa SIM"<<endl;
	cout<< "4. Tidak menggunakan helm dan tidak membawa SIM"<<endl;
	cout<< "5. Semua"<<endl;
	cout<< "Masukkan pelanggaran anda (1-5) : ";
	cin>>denda;
	if (denda == 1){
            cout << "Denda anda sebesar Rp. 100.000 "<<endl;
        }
        else if (denda == 2){
            cout << "Denda anda sebesar Rp. 200.000 "<<endl;
        }
        else if (denda == 3){
            cout << "Denda anda sebesar Rp. 250.000 "<<endl;
        }
        else if (denda == 4){
            cout << "Denda anda sebesar Rp. 350.000 "<<endl;
        }
        else if (denda == 5){
            cout << "Denda anda sebesar Rp. 500.000 "<<endl;
        }
}
