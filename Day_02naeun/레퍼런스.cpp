#include <iostream>
using namespace std;


int main() {

	int a = 10;
	//������ ����
	int* p = &a;//�Ϲݺ����� �ּҸ� ����
	*p = 20;//������ �����ڷ� �Ϲ� ������ ����

	cout << a << endl;

	//���۷���(������)
	int& ref = a; //����a�� ��Ī�� �ο�
	int r = a;
	cout << ref << endl;
	ref = 30; //���۷����� ����Ǹ� a�� �����
	r = 30;//r �ƹ��� �ٲ���� a �� �ٲ�
	cout << a << endl;

	return 0;
}