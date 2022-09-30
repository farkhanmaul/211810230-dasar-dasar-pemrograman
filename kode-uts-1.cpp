//UTS DDP
#include <iostream>
using namespace std;

int main(){
	int a, b;
	int total;
	b = 10;
	cout<<"Menghitung penjumlahan bilangan genap"<<endl;
	for (a = 0; a<b; a++)
	{
		if (a%2 == 0)
		{ total = total+a;}
	cout<<"Total penjumlahan bilangan genap="<<total<<endl;
}
	return 0;
}
