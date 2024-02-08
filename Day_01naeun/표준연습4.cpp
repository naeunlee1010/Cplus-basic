#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int arr[5] = { 0 };
	cout << "정수입력";

	for (int i = 0; i < 5; i++) 
		cin >> arr[i];

	//sort() = 오름차순으로 정렬하는 함수
	sort(arr, arr + 5);//sort(배열의 시작 주소,배열의 끝 주소 +1)

	for (int i = 0; i < 5; i++)
		cout << arr[i] << "";
	return 0;
}