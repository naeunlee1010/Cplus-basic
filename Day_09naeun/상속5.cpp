#include<iostream>
#include<string>
using namespace std;

class A {
public:
	A(int a) {
		cout << "AŬ������ ������" << endl;
	}

};
class B : public A {
	
public:
	//superŬ������ �⺻������(�Ű������� ���� ������)�� ���� ���
	//superŬ������ �������� ���Ŀ� �°� subŬ�������� ȣ���ؾ� ��
	B(int x):A(x) {
		A(1);
	};

};

int main() {

	B a{ 1 };

	return 0;
}