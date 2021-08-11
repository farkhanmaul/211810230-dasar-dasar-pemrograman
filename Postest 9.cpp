#include <iostream>
using namespace std;


void kali(int*a,int*b){
	*b *= *a;
}

int main(){
	int x = 10;
	int y = 20;
	cout<<"X = " << x <<endl;
	cout<<"Y = " << y <<endl;
	cout<<"&X = " << &x <<endl;
	cout<<"&Y = " << &y <<endl;
	cout<<"========== Perkalian ===========" <<endl;
	cout<<"Alamat X = " << &x <<endl;
	cout<<"Alamat Y = " << &y <<endl;
	kali(&x,&y);
	cout<< "Perkalian X dan Y = " << x <<endl;
	return 0;
}
