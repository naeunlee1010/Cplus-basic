//���� Ŭ������ ����Ͽ� 
//1~45 ������ ���� 6���� �������� ���

#include<iostream>
#include<random>
using namespace std;
random_device a;
//mt19937 gen(a());
uniform_int_distribution<int> dist(1, 45);
uniform_real_distribution<double> dist2(1.0, 2.0);

int main() {
	

	for (int i = 0; i < 6; i++) {
		cout << dist(a) << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		cout << dist2(a) << " " ;	
	}

	return 0;
}