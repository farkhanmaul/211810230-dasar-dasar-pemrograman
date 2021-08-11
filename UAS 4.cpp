#include<iostream>
using namespace std;
void soal_uas(string &y, string &z)
{
	string temp = y;
	y = z;
	z = temp;
}
int main()
{
	string a = "Dasar";
	string b = "Pemrograman";
	cout << a <<" "<< b << endl;
	soal_uas(a, b);
	cout << a <<" "<< b << endl;
	return 0;
}
