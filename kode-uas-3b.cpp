#include<iostream>
#include<math.h>
using namespace std;
struct jarak{
	float x,y;
};

int main(){
	jarak t1, t2, t3;
	int AB, AC, BC;
	
	cout<<"masukkan titik A(x1)	= "; cin>>t1.x;
	cout<<"masukkan titik A(y1)	= "; cin>>t1.y;
	cout<<"masukkan titik B(x2)	= "; cin>>t2.x;
	cout<<"masukkan titik B(y2)	= "; cin>>t2.y;
	cout<<"masukkan titik C(x3)	= "; cin>>t3.x;
	cout<<"masukkan titik C(y3)	= "; cin>>t3.y;
	
	AB=sqrt (pow((t1.x - t2.x),2) + pow((t1.y - t2.y),2));
	AC=sqrt (pow((t1.x - t3.x),2) + pow((t1.y - t3.y),2));
	BC=sqrt (pow((t2.x - t3.x),2) + pow((t2.y - t3.y),2));
	
	cout<<"Jarak titik AB	= " <<AB<<endl;
	cout<<"Jarak titik AC	= " <<AC<<endl;
	cout<<"Jarak titik BC	= " <<BC<<endl;	
	
	int min = AB;
	if(BC<min){
		min = BC;
	}
	else if (AC<min){
		min = AC;
	}
	else{
	min = AB;
	}
	cout<<"Jarak terpendek = "<<min;
}
