#include<iostream>
#include<string>
using namespace std;
class Num {
private:
	int a;
public:
	Num(int x) :a(x) {}

	int operator^(int b) {
		int result = 1;
		for (int i = 0; i < b; i++)
			result = a * a;
		return result;//틀린건데 뭐가 틀린건지 모르겠음
	}

	int operator - (int c) {
		
		return a+c;
	}
};


int main() {

	Num b(2);
	
	int a = b ^ 7; //b의 3제곱
	cout << a << endl;//8

	a = b - 6; //b=2이므로 8
	cout << a << endl;

	return 0;
}