#include <iostream>
using namespace std;


int main() {

	int a = 10;
	//포인터 변수
	int* p = &a;//일반변수의 주소를 저장
	*p = 20;//포인터 연산자로 일반 변수에 접근

	cout << a << endl;

	//레퍼런스(참조자)
	int& ref = a; //변수a의 별칭을 부여
	int r = a;
	cout << ref << endl;
	ref = 30; //레퍼런스가 변경되면 a도 변경됨
	r = 30;//r 아무리 바꿔봤자 a 안 바뀜
	cout << a << endl;

	return 0;
}