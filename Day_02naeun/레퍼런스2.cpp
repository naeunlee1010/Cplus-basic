#include <iostream>
#define FIVE 5//상수에 별칭 붙이는 것
using namespace std;

typedef int element;//자료형에 별칭 붙이는 것

int main() {

	int a=10,b=10;
	int* p;
	int& ref;//초기화 안 하면 오류 (별칭 붙일 원본이 없다)
	int& ref = a;//변수에 별칭 붙이는 것

	int& ref = 10;//상수로 초기화해도 오류 발생

	int* p = &a;
	p = &b;

	int& ref = a;
	ref = 20;
	cout <<"a="<< a << endl;

	ref = b;//레퍼런스 변수가 참조하는 변수는 바뀌지 않음
	ref = 20;
	cout << "b=" << b << endl;

	return 0;
}