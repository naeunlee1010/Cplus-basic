#include <iostream>
using namespace std;

//static 멤버변수
//->메모리의 데이터 영역에 할당
//->클래스의 모든 객체가 공우하는 변수
//->객체를 생성하지 않아도 저장공간이 있음

class Circle {
public:
	int radius;
	static int count; // static 멤버변수
	                  //데이터영역에 할당 //클래스의 모든 객체들이 하나의 count멤버변수를 공유
	Circle() {
		radius = 0;
		radius++;
		count++;
		cout << radius << " "<< count << endl;
	}
};
int Circle::count = 0;

int main() {

	Circle c1;
	Circle c2;
	Circle c3;

	return 0;
}