#include <iostream>
using namespace std;

void print(int a, int b) {
	cout << "a=" << a << ", b=" << b;
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void one(int* arr,int size) {
	for (int i = 0; i < size; i++)
		arr[i] = 1;
}

void printarr(int*arr,int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
int main() {

	int a = 10, b = 20;
	print(a,b); //10,20
	cout << endl;

	swap(a,b);
	cout << endl;

	print(a,b);//20,10
	cout << endl;


	int arr[] = { 1,2,3,4,5 };
	one(arr,5);//arr의 모든 원소를 1로 변경
	cout << endl;

	printarr(arr,5);//arr출력 11111
	cout << endl;

	return 0;
}