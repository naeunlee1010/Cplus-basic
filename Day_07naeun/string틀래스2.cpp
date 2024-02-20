#include<iostream>
#include<string>
using namespace std;

int main() {
	//string 클래스의 연산자
	//<>== 사전적 순서로 비교+ 문자열 연결
	string s1 = "apple";
	string s2 = "banana";

	cout << (s1, s2) << endl;
	cout << (s1 == "apple") << endl;
	cout << (s1 > s2) << endl;

	cout << (s1 + s2) << endl;

	//string 클래스의 멤버함수
	string s = "apple";

	cout << s[5] << endl; //빈공간 더 할당시킴 //유효한 글자가 있는 지 체크하지 않음,at()보다 접근이 빠름
	//cout << s.at(5) << endl; //듀효한 글자가 있는지 체크함 -> 범위를 벗어나면 예외 발생

	cout << s.front() << endl; //첫글자 리턴
	cout << s.back() << endl;//마지막 글자 리턴

	cout << s.length() << endl;//문자열 길이 리턴
	cout << s.size() << endl;//문자열 길이 리턴

	cout << s.capacity() << endl;//문자열이 사용중인 메모리 크기 반환
	s = "banana";
	cout << s.empty() << endl;
	s.erase(2, 2);//erase(n,m) n번 인덱스부터 m개의 글자를 삭제
	cout << s << endl;
	s.push_back('ㅇ');//제일 뒤에 ()안의 문자를 붙임
	cout << s << endl;
	s.pop_back();//제일 뒤의 한글자를 지움
	cout << s << endl;

	cout << s.find("an") << endl;//()안의 문자열의 위치(인덱스)를 리턴
	cout << s.substr(1) << endl;//n번째 인덱스부터 끝까지 리턴
	cout << s.substr(2,2) << endl;//부분문자열 리턴

	return 0;
}