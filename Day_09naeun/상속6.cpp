//���� ���:�ΰ� �̻��� Ŭ������ ����ϴ� ��
//java�� c#���� �ٸ� ��ü��������� ���߻�� ������� ����
#include<iostream>
using namespace std;

class A {
public:
	int a;

};
class B {
public:
	int a;
	int b;

};
class C :public A, public B {


};

int main() {
	C a;
	a.A::a = 10;// ���� ����� superŬ������ ����̸��� ��ġ�� ���
	//���ӽ����̽��� ���� �ؾ� ��
	a.b = 20;
	cout << a.A::a << endl;
	cout << a.B::a << endl;
	cout << a.b << endl;


}