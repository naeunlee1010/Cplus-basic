#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	int arr[5] = { 0 };
	cout << "�����Է�";

	for (int i = 0; i < 5; i++) 
		cin >> arr[i];

	//sort() = ������������ �����ϴ� �Լ�
	sort(arr, arr + 5);//sort(�迭�� ���� �ּ�,�迭�� �� �ּ� +1)

	for (int i = 0; i < 5; i++)
		cout << arr[i] << "";
	return 0;
}