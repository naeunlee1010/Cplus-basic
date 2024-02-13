#include <iostream> 
using namespace std;

int main() {

	int arr[5] = { 1,2,3,4,5 };
	double arr2[5] = { 1.0,2.0,3.0,4.0,5.0 };

	for (int a : arr)
		cout << a << " ";

	//for-each문의 변수가 일반 변수이면 배열의 값을 변경할 수 없음
	for (int a : arr)
		a = 0;

	//레퍼런스 변수를 사용하면 변경 가능
	for (int& a : arr)
		a = 0;


	cout << endl;
	for (auto& a : arr)
		cout << a << " ";

	cout << endl;
	for (auto& a : arr2)
		cout << a << " ";
	//auto키워드: 배열의 타입에 맞게 동적으로 변경되는 타입


	return 0;
}