//"red" "blue" "green" �� 1�� �������� 10ȸ ����Ͻʽÿ�

#include <iostream>
#include <string>
#include<random>
using namespace std;

int main() {

	random_device rd;
	uniform_int_distribution<int> dist(0,2);

	string color[3] = { "red","blue","green" };//�迭 by ����

	//���� �� ��
	for (int i = 0; i < 10; i++) {
		
		int b = dist(rd);
		if (b == 0) cout << "red ";
		else if (b == 1) cout << "blue ";
		else  cout << "green ";
	}
	cout << endl;

	//���� �� ��
	for (int i = 0; i < 10; i++) {
		
		int index = dist(rd);
		cout << color[index] << endl;
	}


	return 0;
}