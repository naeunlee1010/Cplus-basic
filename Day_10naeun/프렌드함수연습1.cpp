//Date 클래스
//friend함수 compare( , )선언
//필드->연,월,일
//생성자에서 매개변수로 필드를 초기화

//compare는 Date의 두 객체를 비겨하여 같으면 true
//다르면 false 반환

#include<iostream>
#include<string>
using namespace std;

class Date  {
	friend bool compare(Date a, Date b);
	int year,month,day;
public:
	Date(int a, int b, int c):year(a),month(b),day(c) {}
};
bool compare(Date a, Date b) {
	if (a.year == b.year && b.month == b.month && a.day == b.day) return true;
	else false;
}
int main() {

	Date a(2024, 2, 23);
	Date b(2024, 2, 24);
	Date c(2024, 2, 23);

	cout << compare(a, b) << endl;
	if (compare(b, c) == false) cout << "다름" << endl;
	cout << compare(a, c) << endl;


	return 0;
}