#include <iostream>
#define FIVE 5//����� ��Ī ���̴� ��
using namespace std;

typedef int element;//�ڷ����� ��Ī ���̴� ��

int main() {

	int a=10,b=10;
	int* p;
	int& ref;//�ʱ�ȭ �� �ϸ� ���� (��Ī ���� ������ ����)
	int& ref = a;//������ ��Ī ���̴� ��

	int& ref = 10;//����� �ʱ�ȭ�ص� ���� �߻�

	int* p = &a;
	p = &b;

	int& ref = a;
	ref = 20;
	cout <<"a="<< a << endl;

	ref = b;//���۷��� ������ �����ϴ� ������ �ٲ��� ����
	ref = 20;
	cout << "b=" << b << endl;

	return 0;
}