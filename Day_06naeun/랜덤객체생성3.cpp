//DateŬ����
//�ʵ� �� �� ��
//�����ڿ��� ������ �Ű������� �޾Ƽ� ����
//�� ���� ��������

//Employee Ŭ��
//�ʵ� �̸�, �������(DateŸ��),�Ի���(DateŸ��)
//�����ڿ��� �̸��� �Ű������� �Է¹޾Ƽ� ����
//�������(1990~2000�� ���� ����),�Ի���(2015~2024���� ����)
//�̸� ������� �Ի����� ���

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
		string s = to_string(year) + "�� " + to_string(month) + "�� " + to_string(day) + "��";
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
		string s = this->name + " " + birthdate.datestring() + " ��� " + hiredate.datestring() + " �Ի�";
		cout << s << endl;
	}
};

int main() {

	Employee a1{ "�̳���" };
	Employee a2{ "�����" };
	Employee a3{ "��ä��" };
	Employee a4{ "���Թ�" };
	Employee a5{ "�赿��" };

	return 0;
}