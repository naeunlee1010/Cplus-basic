#include <iostream>
using namespace std;


class A {
public:
	int a; //�������=�ʵ�
	void method(int a) {
		cout << a << endl;//a�� �Ű����� ��Ī
		cout << this->a << endl;//a�� �ʵ���Ī
		//�Լ��� ���������� ��������� �̸��� ��ĥ ���� this ������ ����ؼ� ��������� ����
	}

	void method2() {
		cout << a << endl;//a�� �ʵ���Ī
	}
};

int main() {

	A b;
	b.a = 10;
	b.method(20);
	b.method2();

	return 0;
}