//��ü������ �����
//ĸ��ȭ, ��������, ���, ������
//ĸ��ȭ -> class
//��������->���������� public, private
#include <iostream>
using namespace std;

class B {
//public ���̺� �Ʒ� �ִ� ����� ��𼭵� �� ���� ����
public: 
	int a = 10;
	int a2 = 20;
	void print1(){ }
	void setB(int b) { this->b = b; }
	int getB(){ return b; }

// private ����� class ���ο����� ���ٰ��� 
private:
	int b = 20;
	void print2(){ }

};


int main() {

	B c;
	c.a = 15;
	cout << c.a << endl;
	cout << c.a2 << endl;
	void print1();
	//a�� ���浵 �� �ǰ� ��µ� �� ��

	//c.b; 
	c.setB(25);
	//cout << c.b << endl;
	//void print2();
	cout << c.getB() << endl;
	return 0;
}