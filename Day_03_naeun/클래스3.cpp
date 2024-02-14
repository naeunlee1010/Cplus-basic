#include <iostream>
using namespace std;


class A {
public:
	int a; //멤버변수=필드
	void method(int a) {
		cout << a << endl;//a는 매개변수 지칭
		cout << this->a << endl;//a는 필드지칭
		//함수의 지역변수와 멤버변수의 이름이 겹칠 때는 this 포인터 사용해서 멤버변수에 접근
	}

	void method2() {
		cout << a << endl;//a는 필드지칭
	}
};

int main() {

	A b;
	b.a = 10;
	b.method(20);
	b.method2();

	return 0;
}