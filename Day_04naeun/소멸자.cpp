//소멸자(destructor)
// ->객체가 소멸될 때 자동으로 실행되는 메서드
// ->소멸자를 정의하지 않으면 바디가 빈 기본소멸자를 컴파일러가 추가함

#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "생성자" << endl; }
	~A() { cout << "소멸자" << endl; }
};
int main() {

	A a;

	return 0;
}