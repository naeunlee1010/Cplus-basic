//Rectangle Ŭ����
//������� ���� ����
//���� �����ϴ� ����Լ�

#include <iostream>
using namespace std;


class Rectangle {
public:
	int width;
	int height;

	double calcArea() {
		return width * height;
	}
	void setWH(int a, int b) {
		width = a;
		height = b;
	}
};

int main() {

	Rectangle a;
	a.setWH(4, 4);
	cout << "����= " << a.calcArea() << endl;
	a.width = 5;
	a.height = 4;
	//���� ���� �Ǽ� ����

	cout <<"����= "<< a.calcArea() << endl;
	

	return 0;
}