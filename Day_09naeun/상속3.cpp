#include<iostream>
#include<string>
using namespace std;

class A {
	int a = 10; //sub클래스라고 할지라도 private멤버는 접근할 수 없음
protected:
	int b = 20;//protected멤버는 다른 곳에서는 접근할 수 없음
	            //단,sub클래스에서는 접근할 수 있음
public:
	int c = 30;
};

class B :public A {
public:
	void method() {
		//cout << a << endl; (x)
		cout << b << endl;
	}
};


int main() {
	A b;
	//b.a = 5;
	//b.b = 5;

	B a;
	a.method();

	return 0;
}