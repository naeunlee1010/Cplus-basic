//�������� 7-1

#include <iostream>
using namespace std;

int main() {
	int num=0;
	cout << "������ �Է��� �л� ��:";
	cin >> num;

	cout << num << "���� �л� ������ �Է��Ͻÿ�" << endl;
	int* arr = new int[num];
	for(int i=0;i<num;i++)
		cin >> arr[i];


	int tot = 0;
	double avg = 0.0;
	int max = arr[0];
	for (int i = 0; i < num; i++) {
		tot = tot + arr[i];
		if (max < arr[i])
			max = arr[i];
	}
		
	avg = tot / num;
	
	
		

	cout << "�л���:" << num << endl;
	cout << "����:" << tot << endl;
	cout << "���:" << avg << endl;
	cout << "�ִ밪:" << max << endl;

	delete[] arr;


	return 0;
}