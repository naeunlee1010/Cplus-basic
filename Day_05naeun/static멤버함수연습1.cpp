//PersonŬ������ �ۼ�
#include<iostream>
#include<string>
using namespace std;

class Person {
	static int countM, countW,count;
	string name,sex;

public:
	Person(string name, string sex):name(name),sex(sex) {
		if (sex == "����") countM++;
		else if (sex == "����") countW++;
		else cout << "���� �ٽ� �Է����ֽÿ�." << endl;
	}

	static void printCountAll() {
		count = countM + countW;
		cout << "�� " << count << "�� " << "���� " << countM << "�� " << "���� " << countW << "��" << endl;
	}

	static void printCountMan() {
		cout << "���� " << countM << "��" << endl;
	}

	static void printCountWoman() {
		cout << "���� " << countW << "��" << endl;
	}

};
int Person::count = 0;
int Person::countM = 0;
int Person::countW = 0;

int main() {

	Person p1{ "�̼���","����" };
	Person p2{ "Ȳ����","����" };
	Person p3{ "������","����" };
	Person p4{ "���Թ�","����" };
	Person p5{ "�̳���","����" };
	Person p6{ "������","����" };
	Person p7{ "�λ��","����" };
	Person p8{ "�̹ο�","����" };
	Person p9{ "������","����" };

	Person::printCountAll();//�� 9�� ���� 4�� ���� 5��
	Person::printCountMan();//���� 9��
	Person::printCountWoman();//���� 5��

	return 0;
}