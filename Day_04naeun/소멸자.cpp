//�Ҹ���(destructor)
// ->��ü�� �Ҹ�� �� �ڵ����� ����Ǵ� �޼���
// ->�Ҹ��ڸ� �������� ������ �ٵ� �� �⺻�Ҹ��ڸ� �����Ϸ��� �߰���

#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "������" << endl; }
	~A() { cout << "�Ҹ���" << endl; }
};
int main() {

	A a;

	return 0;
}