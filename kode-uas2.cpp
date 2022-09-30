//Sebuah prosesor komputer harus menyelesaikan 5 tugas (task) secara berurutan. Tugas yang
//pertama akan dilaksanakan pada detik ke 0. Setiap tugas dapat diselesaikan dalam waktu tertentu
//dalam satuan detik. Data waktu untuk menyelesaikan setiap tugas merupakan input dari user
//dalam setuan detik. Buatlah fungsi iteratif dan fungsi rekursif untuk menghitung total waktu yang
//dibutuhkan prosesor untuk menyelesaikan 5 tugas tersebut.
//(Petunjuk: gunakan array untuk menyimpan data waktu penyelesaian tugas)

#include <iostream>
using namespace std;

int arr[5];
int wkt(int f){
	int total;
		for(int i=0;i<5;i++){
		total+=f;
		arr[i]=total;
	}
	return total;
}	
int main(){
    int x;
    cout<<"Masukkan waktu/task(detik) : "; cin>>x;
    cout <<" Total Waktu = " << wkt(x) <<endl;
    for(int i=0; i<5; i++){
		cout<<"Waktu Task 1 = "<< arr[i]<<" detik"<<endl;
	}
}
