//Customer 클래스
//필드: 고객번호, 1부터 순차적으로 증가
//      마일리지 1000 초기화
//      단, 5번째 고객에게는 5000으로 초기화
//생성자 
//고객번호와 마일리지를 출력

#include<iostream>
using namespace std;

class Customer {
	int id, ma;
	static int count;
public:
	Customer() {
		id = 1 + count;
		count++;
		cout<<count<<"번째 고객"<<
	}
};
int Customer::count = 0;

int main() {

	Customer c1;
	Customer c2;
	Customer c3;
	Customer c4;
	Customer c5;
	Customer c6;
	Customer c7;


	return 0;
}