#include <iostream>
using namespace std;

class A{
public:
	int a;
	A() {
		cout << "������" << endl;
	}
};
int main() {

	A a;//�޸��� ���ÿ����� �Ҵ�
	A* b = new A();//�޸��� �� ������ �Ҵ�
	      //new = �����Ҵ��� �ϴ� �����
	b->a = 10;
	cout << b->a << endl;
	return 0;
}