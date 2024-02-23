#include<iostream>
#include<string>
using namespace std;

class Rect {
	int wid, hei;
public:
	Rect(int a, int b) :wid(a), hei(b) {}
	//연산자 오버로딩
	//->연산자의 기능을 메서드처럼 정의
	//->객체가 피연산자가 될 수 있음
	//->현재 객체가 첫번째 피연산자, 매개변수가 두번째 피연산자
	double operator+(Rect a) { //
		int result = wid * hei + a.wid * a.hei;
		return (double)result;
	}

	void print() { cout << "w=" << wid << "h=" << hei << endl; }
	Rect operator*(int a) {
		wid = wid * a;
		hei = hei * a;
		return *this;
	}

	void operator>(int a) {
		cout << "w=" << wid << "h=" << hei << endl;
	}

};

int main() {

	Rect a(3, 5);
	Rect b(5, 6);
	cout<<a+b<<endl;//40출력


	a.print();
	a > 1; //w=3,h=5
	a = a * 2;//정수배만큼 가로세로길이를 늘린 객체를 리턴
	a.print();

	return 0;
}