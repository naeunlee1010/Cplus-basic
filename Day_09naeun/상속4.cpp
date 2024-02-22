#include<iostream>
#include<string>
using namespace std;

class A {
public:
	A() {
		cout << "A클래스의 생성자" << endl;
	}

};
class B : public A{
	//상속을 하면은 생성자마저도 다 상속을 함
public:
	B() {
		A();//클래스를 상속할 경우 super클래스의 생성자를 sub클래스의 생성자에서 호출함
	};

};

int main() {

	B a;

	return 0;
}