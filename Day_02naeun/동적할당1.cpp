#include <iostream>
using namespace std;
int main() {
	//c++������ newŰ����� �����Ҵ��� ��

	int* arr3 = new int[5];//new������Ÿ��[������ ����];
	int* arr2 = new int;//new������Ÿ��;

	for (int i = 0; i < 5; i++)
		cout<<arr3[i]<<" ";//new�� �����Ҵ� �޸𸮴� �����Ⱚ�� �����
	cout << endl;          //=>�ʱ�ȭ�ϴ� �ڵ尡 �ʿ�

	for (int i = 0; i < 5; i++)
		arr3[i] = 0;

	for (int i = 0; i < 5; i++)
		cout << arr3[i]<<" ";


	//delete Ű����� �����Ҵ� ����
	delete[] arr3; //new�� �����Ҵ��� �޸𸮰� �迭�� ��� ����
	delete arr2; //new�� �����Ҵ��� �޸𸮰� ������ ��� ����
	return 0;
}