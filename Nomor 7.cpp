#include <iostream>
using namespace std;

int main(){
	int a, b, c;
	cout<<"Masukkan panjang sisi 1 = ";
	cin>>a;
	cout<<"Masukkan panjang sisi 2 = ";
	cin>>b;
	cout<<"Masukkan panjang sisi 3 = ";
	cin>>c;
	
	if (a+b>c == b+c>a == a+c>b){
		cout<<"Segitiga tersebut valid";
	}
	else{
		cout<<"Segitiga tersebut tidak valid";
	}
}
