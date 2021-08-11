#include <iostream>
using namespace std;

int main(){
	char huruf;
	cout<<"Masukkan huruf = ";
	cin>>huruf;
	if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o'){
		cout<<"Huruf "<<huruf<<" adalah huruf vokal";
	}
	else{
		cout<<"Huruf "<<huruf<<" adalah huruf konsonan";
	}
}
