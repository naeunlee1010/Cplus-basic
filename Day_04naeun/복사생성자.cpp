//���� ����(shallow copy)-> ��ü�� �ּҸ� ����
//���� ����(deep copy)-> ���ο� ��ü�� ����� �ʵ尪�� ����
   //->��������ڸ� �����ϸ� ��

#include <iostream>
using namespace std;

class Ace {
	int a;
public:
	Ace(int b):a(b) {cout<<"������"<<endl; }
	//���� ������
	// ->�Ű������� �ٸ� ��ü�� ����Ÿ��
	Ace(Ace& other) {this->a = other.a;}
	Ace(const Ace& other) {this->a = other.a;}

	~Ace() { cout << "�Ҹ���" << endl; }
};

int main() {

	Ace a(10);
	Ace b(a); //deep copy
	Ace c = a;//shallow copy
	

	return 0;
}