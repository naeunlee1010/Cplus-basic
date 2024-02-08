#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	double arr[5] = { 0.0 };
	cout << "실수 입력";

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	//sort() = 오름차순으로 정렬하는 함수
	sort(arr, arr + 5);//sort(배열의 시작 쥿ㅎ,배열의 끝 주소 +1)

	//for-each문 -> c++추가된 반복문
	for (int a : arr) //for (내부에서 사용할 입시변수 ;배열)
		cout << a << "";

	int last = sizeof(arr) / sizeof(double)-1;
	cout << arr[last]<< " " << arr[last-1] << endl;
	return 0;
}