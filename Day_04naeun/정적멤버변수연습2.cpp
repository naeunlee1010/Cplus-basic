//Customer 클래스
//필드: 고객번호, 1부터 순차적으로 증가
//      마일리지 1000 초기화
//      단, 5번째 고객에게는 5000으로 초기화
//생성자 
//고객번호와 마일리지를 출력

#include<iostream>
using namespace std;

class Customer {
	int id;
	int mal = 1000;
	static int count;
public:
	Customer() {
		id = 1 + count;
		count++;
		if (count == 4) mal = 5000;
		cout << count << "번쨰 고객, 마일리지:" << mal << endl;
	}
};
int Customer::count = 0;
//왜 클래스 안에서 0으로 초기화 안 하고 전역변수로 초기화 하는가??

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
