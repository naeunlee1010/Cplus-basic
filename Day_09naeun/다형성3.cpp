#include<iostream>
#include<string>
using namespace std;

//�߻�(abstract)Ŭ����
//���������Լ��� ������ Ŭ����
class A {
public:
	//���� �����Լ�:�ٵ� ���� �����Լ�(������ Ÿ��x)
	virtual void func() = 0;
	//����,�������� Ư¡�� ���� ���� �߻����� ������ Ŭ������ ����� ���� ��
};

class B :public A {
public:
	void func() { cout << "B�� func()" << endl; }//���������Լ� �������̵�(������)�ؾ���
};


int main() {

	//A a;(x) //�߻�ȭŬ������ ��ü�� ������ �� ����
	A* a = new B();//�߻�ȭŬ������ ����� Ŭ������ �����ڷ� ��ü�� ����
	a->func();
	return 0;
}