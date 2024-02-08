#include <iostream>
#include <string>
using namespace std;


int main() {
	int second,minute,hour,time;

	cout << "초 입력:";   cin >> time;

	minute = time / 60;
	second = time % 60;
	hour = minute / 60;
	minute = minute % 60;

	//to_string(정수나 실수) = 숫자를 문자로 바꿔줌 ex)123 -> "123"
	//string 타입의 문자열을 + 연산자로 결합 가능함 ex)"a"+"bc" -> "abc"
	string s = to_string(hour) + "시간" + to_string(minute) + "분" + to_string(second) + "초";
	cout << s << endl;//쌤


	cout << hour << "시간 " << minute << "분 " << second << "초 " << endl;//나
	return 0;
}