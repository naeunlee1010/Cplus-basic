#include<iostream>
#include<string>
using namespace std;

class A {
public:
	A() {
		cout << "AŬ������ ������" << endl;
	}

};
class B : public A{
	//����� �ϸ��� �����ڸ����� �� ����� ��
public:
	B() {
		A();//Ŭ������ ����� ��� superŬ������ �����ڸ� subŬ������ �����ڿ��� ȣ����
	};

};

int main() {

	B a;

	return 0;
}