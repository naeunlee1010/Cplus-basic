#include<iostream>
#include<string>
using namespace std;

class A {
public:
	A(int a) {
		cout << "A클래스의 생성자" << endl;
	}

};
class B : public A {
	
public:
	//super클래스의 기본생성자(매개변수가 없는 생성자)가 없는 경우
	//super클래스의 생성자의 형식에 맞게 sub클래스에서 호출해야 함
	B(int x):A(x) {
		A(1);
	};

};

int main() {

	B a{ 1 };

	return 0;
}