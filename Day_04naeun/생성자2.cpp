#include <iostream>
using namespace std;

class A {
	
public:
	int a, b;
	              //��� �ʱ�ȭ ����Ʈ
	A(int c, int d):a(c),b(d) {
		          //a=c; b=d;��� ��
	}
	
};

int main() {

	//A a;//���α׷��Ӱ� �����ڸ� ������ ���, 
	    //�����Ϸ��� �⺻�����ڸ� �߰����� ���� (�׷��� ���� ��!) 
	    //-> ������ ������ ���Ŀ� �°� ��ü�� �����ؾ� ��
	A a{ 10, 20 };
	cout << a.a << " " << a.b << endl;

	return 0;
}