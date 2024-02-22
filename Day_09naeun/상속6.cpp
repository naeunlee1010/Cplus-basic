//다중 상속:두개 이상의 클래스를 상속하는 것
//java나 c#같은 다른 객체지향언어에서는 다중상속 허용하지 않음
#include<iostream>
using namespace std;

class A {
public:
	int a;

};
class B {
public:
	int a;
	int b;

};
class C :public A, public B {


};

int main() {
	C a;
	a.A::a = 10;// 다중 상속한 super클래스의 멤버이름이 겹치는 경우
	//네임스페이스로 구분 해야 함
	a.b = 20;
	cout << a.A::a << endl;
	cout << a.B::a << endl;
	cout << a.b << endl;


}