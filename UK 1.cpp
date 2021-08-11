#include <iostream>
using namespace std;

int cek_angka(int angka){
	return angka%5;
}
int main(){
	int n;
	cout<<"Masukkan angka :";
	cin>>n;
	if(cek_angka(n))
	cout <<"Bilangan bukan kelipatan lima";
	else
	cout<<"Bilangan kelipatan lima";
	return 0;
}
