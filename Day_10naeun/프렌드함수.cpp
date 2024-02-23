#include<iostream>
using namespace std;

class A {
	int a = 10;
public:
	static void method();
	friend void func(A a); 
	void method2();
	//friend 함수:
	//클래스 안에서 원형을 선언하기는 하지만
	//클래스의 멤버는 아닌 함수
	//클래스의 멤버는 아니지만 멤버에 접근가능한 함수

};
void A::method() {
	cout << "static 메서드" << endl;
	//cout << a << endl; //static필드가 일반 필드에 접근할 수 없음
}
void func(A a){//friend함수의 정의는 클래스 밖에서
	cout << "프렌드함수" << endl;
	cout << a.a << endl;
}
int main(){

	A a;
	a.method2();//메서드 호출
	A::method();//static메서드 호출
	func(a);//friend함수 호출


	return 0;
}