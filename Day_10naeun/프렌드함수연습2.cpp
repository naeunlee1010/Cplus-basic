//RectangleŬ����
//�ʵ� ���� ����
//������ �Ű������� �ʵ� �ʱ�ȭ
//�������Լ� add(Rect,Rect)

//add():�� �簢���� ������ ���� ���� ���
#include<iostream>
#include<string>
using namespace std;

class Rect {
	int wid, hei;
public:
	Rect(int a,int b):wid(a),hei(b){}
	friend void add(Rect a,Rect b);

};
void add(Rect a, Rect b) {

	cout << "�� �簢���� ������ ����? ";
	int aArea = a.wid * a.hei;
	int bArea = b.wid * b.hei;
	cout << aArea + bArea << endl;
}

//retutn�ϱ�
//double add(Rect a, Rect b) {
//
//	cout << "�� �簢���� ������ ����? ";
//	int aArea = a.wid * a.hei;
//	int bArea = b.wid * b.hei;
//	double sum = aArea + bArea;
//	return sum;
//	
//}

int main() {

	Rect a(3, 5);
	Rect b(5, 6);
	add(a, b);//40���
	return 0;
}