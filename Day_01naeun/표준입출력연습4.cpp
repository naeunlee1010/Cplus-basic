#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	double arr[5] = { 0.0 };
	cout << "�Ǽ� �Է�";

	for (int i = 0; i < 5; i++)
		cin >> arr[i];

	//sort() = ������������ �����ϴ� �Լ�
	sort(arr, arr + 5);//sort(�迭�� ���� �M��,�迭�� �� �ּ� +1)

	//for-each�� -> c++�߰��� �ݺ���
	for (int a : arr) //for (���ο��� ����� �Խú��� ;�迭)
		cout << a << "";

	int last = sizeof(arr) / sizeof(double)-1;
	cout << arr[last]<< " " << arr[last-1] << endl;
	return 0;
}