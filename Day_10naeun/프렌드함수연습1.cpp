//Date Ŭ����
//friend�Լ� compare( , )����
//�ʵ�->��,��,��
//�����ڿ��� �Ű������� �ʵ带 �ʱ�ȭ

//compare�� Date�� �� ��ü�� ����Ͽ� ������ true
//�ٸ��� false ��ȯ

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
	if (compare(b, c) == false) cout << "�ٸ�" << endl;
	cout << compare(a, c) << endl;


	return 0;
}