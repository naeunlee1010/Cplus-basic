//Student Ŭ����
//�ʵ�: �й�,�̸�
//�̸��� �����ڿ��� �μ��� �Է¹޾� ä���
//�к��� ������ ������� 20240001���� 1�� ����
//�й� �̸��� �����ڿ��� ���

#include <iostream> 
#include <string>
using namespace std;

class Student {

	int id;
	string name;
	static int count;
public:
	Student(string n):name(n) {
		count++;
		id = 20240001 + count;
		id++;
		print();
	}
	void print() {
		cout << id << " " << name << " " << count << "��" << endl;
	}

};
int Student::count = 0;

int main() {

	Student s1{ "james" };//20240001 james
	Student s2{ "wade" };//20240002
	Student s3{ "paul" };

}