#include <iostream> 
using namespace std;

int main() {

	int arr[5] = { 1,2,3,4,5 };
	double arr2[5] = { 1.0,2.0,3.0,4.0,5.0 };

	for (int a : arr)
		cout << a << " ";

	//for-each���� ������ �Ϲ� �����̸� �迭�� ���� ������ �� ����
	for (int a : arr)
		a = 0;

	//���۷��� ������ ����ϸ� ���� ����
	for (int& a : arr)
		a = 0;


	cout << endl;
	for (auto& a : arr)
		cout << a << " ";

	cout << endl;
	for (auto& a : arr2)
		cout << a << " ";
	//autoŰ����: �迭�� Ÿ�Կ� �°� �������� ����Ǵ� Ÿ��


	return 0;
}