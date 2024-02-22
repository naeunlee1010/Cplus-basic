//string 클래스 C++의 문자열 관련 클래스
//문자열을 저장하는 기능 외에 여러가지 문자열 조작 멤버함수들이 있음
// 
//C타입의 문자열은 맨 뒤에 '\0'(null)문자가 포함되었으나
//string타입의 문자열에는 포함되지 않음
//동적으로 문자열의 길이를 변경가능

#include<iostream>
#include<string>
using namespace std;

int main() {

	string s,str;
	//입출력
	//cin >> s;
	getline(cin, s);//getline(입력스트림, 저장할변수)
	getline(cin, s, 'a');//'a'전까지의 문자열을 입력
	cout << s << endl;

	//string객체 생성방법
	str = "apple";//대입연산자로 문자열 생성
	string str2("apple");//생성자로 문자열 생성
	char arr[] = { 'a','c','e' };
	string str1(arr);//char형 배열로 생성

	string* str3 = new string("apple");//동적할당으로 생성
	

	return 0;
}
