//Color 클래스
//멤버로 r,g,b
//생성자에서 매개변수로 초기화
//print메서드 r:0 g:0 b:0
//연산자 +는 두 Color객체의 r g b를 더하기
//연산자 -는 두 Color객체의 r g b를 빼기

#include<iostream>
#include<string>
using namespace std;

class Color {
	int r, g, b;
public:
	Color(int a, int b, int c) :r(a), g(b), b(c) {}

	void print() { cout << "r=" << r << " g=" << g << " b= " << b << endl; }

	Color operator + (Color m) {
		Color temp(r, g, b);
		temp.r = r + m.r;
		temp.g = g + m.g;
		temp.b = b + m.b;
		return temp;
	}

	Color operator - (Color m) {
		Color temp(r, g, b);
		temp.r = r + m.r;
		temp.g = g + m.g;
		temp.b = b + m.b;
		return temp;
	}
	friend Color operator -(Color, Color);
};
Color operator -(Color, Color) {
	Color temp(a.r, a.g, a.b);
	temp.r = r + .r;
	temp.g = g + m.g;
	temp.b = b + m.b;
	return temp;
}
int main() {

	Color a(1, 1, 1);
	Color b(2, 2, 3);
	Color c(3, 3, 3);

	Color d = a + b;
	Color e = c - b;
	d.print();
	e.print();

	return 0;
}