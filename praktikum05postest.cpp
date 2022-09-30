#include <iostream>
using namespace std;

int main(){
	int n ;
	cout <<"++======================================++"<<endl;
	cout <<"||\t\tPERULANGAN\t\t||"<<endl;
	cout <<"++======================================++"<<endl;
	cout << "Masukan batas tinggi :";
	cin >>n;
	//pola 1
	for(int i=1;i<=n;i++){
		for(int j=n;j>i;j--){
			cout<<" ";
		}
		for(int k=1;k<=(2*i-1);k++){
			cout<<n+1-i;			
		}
		cout<<endl;
	}
	for(int a=2;a<=n;a++){
		for (int b=1;b<a;b++){
			cout<<" ";
		}
		for(int c=n;c>=(2*a-n);c--){
			cout<<a;
		}
		cout<<endl;
	}
}
