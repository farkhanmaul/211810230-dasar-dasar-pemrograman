#include <iostream>
using namespace std;

int main(){

int A[4][4];
int B[4][4];
int C[4][4];

for (int i=0; i<4; i++) {
	for (int j=0; j<4; j++) {
		if (i%j==0) {
			A[i][j] = 1;
		}
		else {
			A[i][j] = 0;
		}
	}
}

for (int i=0; i<4; i++){
	for (int j=0; j<4; j++){
		if (i==j) {
			B[i][j] = 1;
		}
		else {
			B[i][j] = 0;
		}
	}
}

for (int i=0; i<4; i++){
	for (int j=0; j<4; j++){
		C[i][j] = A[i][j]+ B[i][j];
	}
}
cout<< A[1][3]<< A[2][2]<< A[4][2]<< A[4][1] << "mana"<<endl;
cout<< B[1][1]<< B[1][2]<< B[4][2]<< B[3][3] <<endl;
return 0;
}
