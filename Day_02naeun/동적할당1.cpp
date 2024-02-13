#include <iostream>
using namespace std;
int main() {
	//c++에서는 new키워드로 동적할당을 함

	int* arr3 = new int[5];//new데이터타입[원소의 개수];
	int* arr2 = new int;//new데이터타입;

	for (int i = 0; i < 5; i++)
		cout<<arr3[i]<<" ";//new로 동적할당 메모리는 쓰레기값이 저장됨
	cout << endl;          //=>초기화하는 코드가 필요

	for (int i = 0; i < 5; i++)
		arr3[i] = 0;

	for (int i = 0; i < 5; i++)
		cout << arr3[i]<<" ";


	//delete 키워드로 동적할당 해제
	delete[] arr3; //new로 동적할당한 메모리가 배열인 경우 해제
	delete arr2; //new로 동적할당한 메모리가 변수인 경우 해제
	return 0;
}