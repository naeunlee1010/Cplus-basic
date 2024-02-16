//static멤버함수(static메서드)
// ->static 수식어가 붙은 멤버함수
// ->객체를 생성하지 않고도 사용 가능

#include <iostream>
using namespace std;


class A {
	int a;
	static int b;
public:
	void method1() {
		a = 10;
		b = 10;
		cout << "인스턴스 메서드" << endl;
	}

	static void method2() {
		//a = 20;(x) static 멤버함수는 일반 필드(인스턴스 필드)에 접근 불가 , 
		// (없는 변수에 접근할 수 있기때문 int a는 객체 생성전에 없는 것임)
		b = 20;
		cout << "static 메서드" << endl;
	}
};
int A::b = 0;


int main() {

	//객체명 대신 클래스명을 네임스페이스로
	A::method2();

	A* a = new A();//1번째 방법
	a->method1();
	a->method2();

	A b;
	b.method1();//2번째 방법
	b.method2();

	return 0;
	
}
