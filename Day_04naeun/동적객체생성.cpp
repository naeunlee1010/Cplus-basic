#include <iostream>
using namespace std;

class A{
public:
	int a;
	A() {
		cout << "생성자" << endl;
	}
};
int main() {

	A a;//메모리의 스택영역에 할당
	A* b = new A();//메모리의 힙 영역에 할당
	      //new = 동적할당을 하는 예약어
	b->a = 10;
	cout << b->a << endl;
	return 0;
}