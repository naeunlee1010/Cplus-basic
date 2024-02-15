//얕은 복사(shallow copy)-> 객체의 주소만 복사
//깊은 복사(deep copy)-> 새로운 객체를 만들고 필드값을 복사
   //->복사생성자를 정의하면 됨

#include <iostream>
using namespace std;

class Ace {
	int a;
public:
	Ace(int b):a(b) {cout<<"생성자"<<endl; }
	//복사 생성자
	// ->매개변수가 다른 객체의 참조타입
	Ace(Ace& other) {this->a = other.a;}
	Ace(const Ace& other) {this->a = other.a;}

	~Ace() { cout << "소멸자" << endl; }
};

int main() {

	Ace a(10);
	Ace b(a); //deep copy
	Ace c = a;//shallow copy
	

	return 0;
}