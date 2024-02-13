#include <iostream>
#include <string>
using namespace std;

int main() {

	int num = 0;
	cout << "입력할 문자열 개수:";
	cin >> num;
	string* arr = new  string[num];

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 이름:";
		cin >> arr[i];
	}

	cout << "\n&&문자열 출력&&\n" << endl;
	
	for (int i = 0; i < num; i++)
		cout << arr[i] << endl;
	




	return 0;
}