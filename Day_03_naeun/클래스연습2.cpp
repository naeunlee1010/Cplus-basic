//Rectangle 클래스
//멤버변수 가로 세로
//면적 리턴하는 멤버함수

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
	cout << "넓이= " << a.calcArea() << endl;
	a.width = 5;
	a.height = 4;
	//가로 세로 실수 저장

	cout <<"넓이= "<< a.calcArea() << endl;
	

	return 0;
}