#include <iostream>
#include <string>
using namespace std;

int main() {

	int num = 0;
	cout << "�Է��� ���ڿ� ����:";
	cin >> num;
	string* arr = new  string[num];

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "��° �̸�:";
		cin >> arr[i];
	}

	cout << "\n&&���ڿ� ���&&\n" << endl;
	
	for (int i = 0; i < num; i++)
		cout << arr[i] << endl;
	




	return 0;
}