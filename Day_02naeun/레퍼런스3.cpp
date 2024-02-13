#include <iostream>
using namespace std;

void print(int a) { //call-by-value 값에 의한 호출(매개면수가 일반 변수)
	cout << a << endl;
}


void hundred(int* a) {//call=by-address 주소에 의한 호출(매개변수가 포인터 변수)
	*a = 100;
	print(*a);
}

void thousand(int& a) {//call-by-reference 참조에 의한 호출(매개변수가 레퍼런스 변수)
	a = 1000;//값을 변경할 때나 참조할 때 모두 *연산자를 쓰지 않아도 됨
	print(a);
}



int main() {

	int a = 10;
	hundred(&a);
	thousand(a);
	

	return 0;
}