//Date클래스
//필드 연 월 일
//생성자에서 연도는 매개변수로 받아서 저장
//월 일은 랜덤으로

//Employee 클라스
//필드 이름, 생년월일(Date타입),입사일(Date타입)
//생성자에서 이름은 매개변수로 입력받아서 자장
//생년월일(1990~2000년 사이 랜덤),입사일(2015~2024사이 랜덤)
//이름 생년월일 입사일을 출력

#include<iostream>
#include<string>
#include<random>

using namespace std;

class Date {
private:
	int year, month, day;
public:
	
	Date(int a):year(a) {
		random_device rd;
		uniform_int_distribution<int> dis_month(1, 12);
		uniform_int_distribution<int> dis_day1(1, 30);
		uniform_int_distribution<int> dis_day2(1, 31);
		uniform_int_distribution<int> dis_day3(1, 28);
		month = dis_month(rd);
		switch (month) {
		case 4:case 6:case 9: case 11:
			day = dis_day1(rd); break;
		case 1:case 3: case 5: case 7: case 8: case 10: case 12:
			day = dis_day2(rd); break;
		case 2:
			day = dis_day3(rd); break;
		}
	}
	string datestring() {
		string s = to_string(year) + "년 " + to_string(month) + "월 " + to_string(day) + "일";
		return s;
	}

};

class Employee {
private:
	random_device rd;
	uniform_int_distribution<int> byear{ 1990,2000 };
	uniform_int_distribution<int> hyear{ 2015,2024 };
	string name;
	Date birthdate{ byear(rd) };
	Date hiredate{ hyear(rd) };
public:
	Employee(string b):name(b) {
		string s = this->name + " " + birthdate.datestring() + " 출생 " + hiredate.datestring() + " 입사";
		cout << s << endl;
	}
};

int main() {

	Employee a1{ "이나은" };
	Employee a2{ "명원설" };
	Employee a3{ "빈채영" };
	Employee a4{ "차규민" };
	Employee a5{ "김동이" };

	return 0;
}