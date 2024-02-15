//클래스
//멤버변수 -> 필드
//멤버함수 -> 메서드

//생성자(constructor) 
// -> 객체가 생성될 때 자동 호출하는 메서드
// -> 모든 클래스는 생성자를 보유함
// -> 클래스명과 이름이 동일한 메서드
// -> 객체가 생성될 때, 하고싶은 일들을 생성자에 정의
// -> 보통은 필드를 초기화하는 작업을 정의함
// -> 생성자도 오버로딩이 가능함
#include <iostream>
using namespace std;

class A {
public:
	int a, b;
	//A(){} //만약 프로그레머가 클래스에 생성자를 정의하지 않은 경우
	      //컴파일러는 {}가 비어있는 기본생성자를 추가함
	      //기본(default)생성자: 매개변수가 없는 생성자
};
class B {
public:
	int a, b;
	B() {
		cout << "B클래스의 기본 생성자" << endl;
		a = b = 0;
		print();
	}
	B(int c) {
		cout << "세번째 생성자" << endl;
		a = b= c; 
		print();
	}
	B(int c,int d) {
		cout << "세번째 생성자" << endl;
		a = c; b = d;
		print();
	}
	void print() {
		cout << "a=" << a << "b=" << b << endl;
	}
};
int main() {

	A a;
	B b;
	B b2(10);
	B b3(20, 30); //과거에 쓰던 표현
	B b4{ 40,50 }; //최신 표현
	B b5 = { 60,70 }; //가능
	cout << b.a << endl;
	return 0;
}