#include <iostream>
#include <string>
using namespace std;


int main() {
	int second,minute,hour,time;

	cout << "�� �Է�:";   cin >> time;

	minute = time / 60;
	second = time % 60;
	hour = minute / 60;
	minute = minute % 60;

	//to_string(������ �Ǽ�) = ���ڸ� ���ڷ� �ٲ��� ex)123 -> "123"
	//string Ÿ���� ���ڿ��� + �����ڷ� ���� ������ ex)"a"+"bc" -> "abc"
	string s = to_string(hour) + "�ð�" + to_string(minute) + "��" + to_string(second) + "��";
	cout << s << endl;//��


	cout << hour << "�ð� " << minute << "�� " << second << "�� " << endl;//��
	return 0;
}