#include <iostream>
using namespace std;
//c++에서는 중복된 이름의 함수나 메서드를 선언할 수 있음
//단, 매개변수의 형태가 달라야 함
//오버로딩

void print(int a) { cout<< a <<endl; }
void print(double a) { cout << a <<endl; }
void print(string a) { cout << a <<endl; }
void print(int a,int b) { cout << a << endl; }
int main() {

	print(1);
	print(1.6);
	print("apple");

	return 0;
}