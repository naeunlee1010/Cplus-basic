#include<iostream>
#include<string>
using namespace std;

class Shape {
public:
	//가상함수 -> virtual 수식어가 붙은 함수
	virtual void draw() { //draw()호출시 이게 아니라 저 밑 circle이 선언
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