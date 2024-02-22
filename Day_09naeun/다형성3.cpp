#include<iostream>
#include<string>
using namespace std;

//추상(abstract)클래스
//순수가상함수를 보유한 클래스
class A {
public:
	//순수 가상함수:바디가 없는 가상함수(프로토 타입x)
	virtual void func() = 0;
	//도형,동물같은 특징이 딱히 없는 추상적인 개념을 클래스로 만들고 싶을 때
};

class B :public A {
public:
	void func() { cout << "B의 func()" << endl; }//순수가상함수 오버라이딩(재정의)해야함
};


int main() {

	//A a;(x) //추상화클래스는 객체를 생성할 수 없음
	A* a = new B();//추상화클래스를 상속한 클래스의 생성자로 객체를 생성
	a->func();
	return 0;
}