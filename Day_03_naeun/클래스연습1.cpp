//person Ŭ����
//������� �̸�, ����,Ű,������
//��������� �̸� ���� Ű ������ ����ϴ� �Լ�
#include <iostream>
#include <string>
using namespace std;

class Person {
public:	
	string name;
	int age;
	double height;
	double weight;

	void print() {
		cout << name <<" " << age << "�� " << height << "cm " << weight << "kg " << endl;
	}

	//����������� ���� �����ϴ� �Լ�
	void save(string name, int age, double height, double weight) {
		this->name = name;
		this->age = age;
		this->height = height;
		this->weight = weight;
	}
};

int main() {

	Person p;
	//�̸� ���� Ű ������ ����
	p.save("ȫ�浿", 21, 176.6, 67.2);
	p.print(); //ȫ�浿 21�� 176.6cm 67,2kg


	p.name = "�̳���";
	p.age = 25;
	p.height = 165.5;
	p.weight = 57.5;
	p.print(); //ȫ�浿 21�� 176.6cm 67,2kg

	return 0;
}