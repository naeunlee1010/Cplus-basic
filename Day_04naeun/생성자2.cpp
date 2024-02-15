#include <iostream>
using namespace std;

class A {
	
public:
	int a, b;
	              //멤버 초기화 리스트
	A(int c, int d):a(c),b(d) {
		          //a=c; b=d;라는 뜻
	}
	
};

int main() {

	//A a;//프로그래머가 생성자를 정의한 경우, 
	    //컴파일러는 기본생성자를 추가하지 않음 (그래서 에러 뜸!) 
	    //-> 정의한 생성자 형식에 맞게 객체를 생성해야 함
	A a{ 10, 20 };
	cout << a.a << " " << a.b << endl;

	return 0;
}