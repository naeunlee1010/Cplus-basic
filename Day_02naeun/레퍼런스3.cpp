#include <iostream>
using namespace std;

void print(int a) { //call-by-value ���� ���� ȣ��(�Ű������ �Ϲ� ����)
	cout << a << endl;
}


void hundred(int* a) {//call=by-address �ּҿ� ���� ȣ��(�Ű������� ������ ����)
	*a = 100;
	print(*a);
}

void thousand(int& a) {//call-by-reference ������ ���� ȣ��(�Ű������� ���۷��� ����)
	a = 1000;//���� ������ ���� ������ �� ��� *�����ڸ� ���� �ʾƵ� ��
	print(a);
}



int main() {

	int a = 10;
	hundred(&a);
	thousand(a);
	

	return 0;
}