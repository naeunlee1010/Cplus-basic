//객체지향의 개념들
//캡슐화, 정보은닉, 상속, 다형성
//캡슐화 -> class
//정보은닉->접근지정자 public, private
#include <iostream>
using namespace std;

class B {
//public 레이블 아래 있는 멤버는 어디서든 지 접근 가능
public: 
	int a = 10;
	int a2 = 20;
	void print1(){ }
	void setB(int b) { this->b = b; }
	int getB(){ return b; }

// private 멤버는 class 내부에서만 접근가능 
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
	//a는 변경도 잘 되고 출력도 잘 됨

	//c.b; 
	c.setB(25);
	//cout << c.b << endl;
	//void print2();
	cout << c.getB() << endl;
	return 0;
}