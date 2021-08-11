#include <iostream>
using namespace std;

void print_array(int arr[],int i, int j)
{
	if(i >= j)
	return;
	cout << arr[i]<<" ";
	print_array(arr, i+2, j);
	cout<<arr[i]<<" ";
}
int main(){
	int n=10;
	int arr[n]={1,2,6,5,3,7,4,9,3,5};
	print_array(arr,0,n);
	return 0;
}
