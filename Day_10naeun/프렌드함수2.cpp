#include<iostream>
#include<string>
using namespace std;
//friend�Լ��� ���ó
// ->��ü�� ���ϴ� �Լ��� �ַ� ����

class Student {
	friend int equal(Student a, Student b);
	int id;
	string name;
public:
	Student(int x, string y) :id(x), name(y) {}
};
int equal(Student a, Student b) {
	if (a.id = b.id && a.name == b.name) return 1;
	else return 0;
}

int main() {

	Student a(20240001, "�̳���");
	Student b(20240001, "���Թ�");
	Student c(20240002, "�λ��");

	if (equal(a, b)) cout << "���� �л��Դϴ�." << endl;
	else if (equal(a, b) == 0) cout << "�ٸ� �л��Դϴ�." << endl;

	return 0;
}