//절차지향 vs 객체지향
//객체지향 언어(POP)
//  -> 함수 위주의 프로그램
//  -> 데이터와 기능(함수)이 분리됨
//절차지향 언어(OOP)
// -> 클래스 위주의 프로그램
// -> 데이터와 기능(메서드) 합쳐짐

#include <iostream> 
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

//c스타일의 구조체
typedef struct {

	int radius;
	char color[30];

}Circle1;
double cArea(Circle1* c) {
	return c->radius * c->radius * 3.14;
}


//c++클래스
class Circle2 {
public:
	int radius; //클래스의 멤버변수
	string color;

	double cArea() { //멤버함수,메서드(method)
		return radius * radius * 3.14;
	}
};


int main() {

	Circle1 a; //= { 10,"red" };
	a.radius = 10;
	strcpy_s(a.color, 30, "red");
	printf("%lf\n", cArea(&a));

	Circle2 b;//Circle2클래스의 객체(인스턴스) b
	b.radius = 10;
	b.color = "red";
	//객체명.멤버명 -> 멤버참조연산자
	cout << b.cArea() << endl;

	return 0;
}