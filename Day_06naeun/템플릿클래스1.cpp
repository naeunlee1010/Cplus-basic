#include<iostream>
#include<string>
using namespace std;
//template클래스(일반화클래스,generic클래스)
//타입 매개변수로 멤버의 타입을 정하는 클래스
template <typename T,typename K>

class Ta {
public:
	T a;
	K b;
};

int main() {

	Ta<int,int> a;
	a.a = 10;
	Ta<double,int> b;
	b.a = 10.5;
	Ta<string,sring> c;
	c.a = "apple";

	return 0;
}