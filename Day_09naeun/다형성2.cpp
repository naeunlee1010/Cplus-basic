#include<iostream>
#include<string>
using namespace std;

class Shape {
public:
	//�����Լ� -> virtual ���ľ ���� �Լ�
	virtual void draw() { //draw()ȣ��� �̰� �ƴ϶� �� �� circle�� ����
		cout << "Shape draw" << endl;
	}
};

class Circle :public Shape {
public:
	void draw() {
		cout << "Circle Draw" << endl;
	}
};
class Rectangle :public Shape {
public:
	void draw() {
		cout << "Rectangle Draw" << endl;
	}
};

int main() {

	Shape* p1=new Circle();
	p1->draw();
	

	Shape* p2 = new Rectangle();
	p2->draw();

	

	return 0;
}