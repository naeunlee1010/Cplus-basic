#include <iostream>
using namespace std;
//c++������ �ߺ��� �̸��� �Լ��� �޼��带 ������ �� ����
//��, �Ű������� ���°� �޶�� ��
//�����ε�

void print(int a) { cout<< a <<endl; }
void print(double a) { cout << a <<endl; }
void print(string a) { cout << a <<endl; }
void print(int a,int b) { cout << a << endl; }
int main() {

	print(1);
	print(1.6);
	print("apple");

	return 0;
}