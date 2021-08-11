#include <iostream>
using namespace std;

int skor[5][5] = {{32, 67, 93, 67},{99,98,99,70},{50,60,70,50},{80,70,65,35}};
int main(){
cout<<"tugas \t UTS \t UAS \t Kuis \t Nilai\n";
for(int i=0;i<4;i++){
	cout<<skor[i][1]<<"\t";
	cout<<skor[i][2]<<"\t";
	cout<<skor[i][0]<<"\t";
	cout<<skor[i][3]<<"\t";
	cout<<(0.3 * skor[i][1])+(0.25 * skor[i][2])+(0.35 * skor[i][0])+(0.1 *skor[i][3]);
	cout<<endl; 
}
}
