//static����Լ�(static�޼���)
// ->static ���ľ ���� ����Լ�
// ->��ü�� �������� �ʰ� ��� ����

#include <iostream>
using namespace std;


class A {
	int a;
	static int b;
public:
	void method1() {
		a = 10;
		b = 10;
		cout << "�ν��Ͻ� �޼���" << endl;
	}

	static void method2() {
		//a = 20;(x) static ����Լ��� �Ϲ� �ʵ�(�ν��Ͻ� �ʵ�)�� ���� �Ұ� , 
		// (���� ������ ������ �� �ֱ⶧�� int a�� ��ü �������� ���� ����)
		b = 20;
		cout << "static �޼���" << endl;
	}
};
int A::b = 0;


int main() {

	//��ü�� ��� Ŭ�������� ���ӽ����̽���
	A::method2();

	A* a = new A();//1��° ���
	a->method1();
	a->method2();

	A b;
	b.method1();//2��° ���
	b.method2();

	return 0;
	
}
