#include <stdlib.h> 

int main() {

	char* p = (char*)malloc(10);
	p = (char*)realloc(p, 20);//�����Ҵ�޸� ���Ҵ�
	p = (char*)realloc(p, 5);

	char* a = new char[5];
	//c++������ �����Ҵ��� �޸𸮸� ���Ҵ� �� �� ����
	//char���� �⺻ ������ string�� Ŭ���� char���� ���� �� ��

	delete[] a; //�����Ҵ� ���� ��
	a = new char[10]; //�ٽ� �Ҵ��ؾ� �� (��ǻ� �ǹ� ���� ���Ҵ��� �� ������ �ϴ� ��)

	char* b = new char[10];
	for (int i = 0; i < 5; i++)
		b[i] = a[i];


	return 0;
}