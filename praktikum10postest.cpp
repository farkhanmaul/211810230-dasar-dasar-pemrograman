#include <iostream>
#include <fstream>
using namespace std;

int main () {
	int a, total = 0;
	cout <<"masukkan total isi array : "; cin>>a;
	int array[a];
	for (int i=0;i<a;i++){
		cout<<"Masukkan isi array index ke "<<i<<" ";cin>>array[i];
	}
	
	ofstream masuk;
	masuk.open("tgs.txt");
	for(int i = 0; i< a;i++){
	    if (i==a-1){
		masuk<<array[i];
		}
		else {
		masuk<<array[i]<<" ";
		}
	}
	masuk.close();
	
	ifstream keluar;
	int num;
	keluar.open("hasil.txt");
	while(!keluar.eof()){
	keluar>>num;
	total+=num;	
	}
	keluar.close();
	
	ofstream tulis;
	tulis.open("rerata.txt");
	tulis<<(float)total/a;
	tulis.close();
	return 0;
}	
