#include<iostream>
#include<string>
using namespace std;

class A {
	int a = 10; //subŬ������� ������ private����� ������ �� ����
protected:
	int b = 20;//protected����� �ٸ� �������� ������ �� ����
	            //��,subŬ���������� ������ �� ����
public:
	int c = 30;
};

class B :public A {
public:
	void method() {
		//cout << a << endl; (x)
		cout << b << endl;
	}
};


int main() {
	A b;
	//b.a = 5;
	//b.b = 5;

	B a;
	a.method();

	return 0;
}