#include<iostream>
using namespace std;

class A {
	int a = 10;
public:
	static void method();
	friend void func(A a); 
	void method2();
	//friend �Լ�:
	//Ŭ���� �ȿ��� ������ �����ϱ�� ������
	//Ŭ������ ����� �ƴ� �Լ�
	//Ŭ������ ����� �ƴ����� ����� ���ٰ����� �Լ�

};
void A::method() {
	cout << "static �޼���" << endl;
	//cout << a << endl; //static�ʵ尡 �Ϲ� �ʵ忡 ������ �� ����
}
void func(A a){//friend�Լ��� ���Ǵ� Ŭ���� �ۿ���
	cout << "�������Լ�" << endl;
	cout << a.a << endl;
}
int main(){

	A a;
	a.method2();//�޼��� ȣ��
	A::method();//static�޼��� ȣ��
	func(a);//friend�Լ� ȣ��


	return 0;
}