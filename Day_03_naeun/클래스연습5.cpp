//plus클래스
//public 메서드 plus() x 3

#include <iostream> 
#include <string>
using namespace std;

class Plus { //접근 지정 레이블이 없을 시 디폴트 값이 private
public: 
	void plus(int a, int b) { cout<<  a + b<<endl; }
	void plus(int a, int b,int c) { cout<<a + b+ c<<endl; }
	void plus(double a, double b, double c) { cout<< a + b + c<<endl; }
	void plus(string a, string b,string c) { cout << a + b + c << endl; }
};
int main() {

	Plus a;
	a.plus(1, 2);
	a.plus(1, 2, 3);
	a.plus(1.5,2.6,3.7);
	a.plus("apple","mango","lemon");

}