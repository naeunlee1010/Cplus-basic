//Student Ŭ����
//�й�, �̸� ������ ���� -> �ʵ�
//������1 
// �й� �̸��� �μ��� �Է¹޾� ���� ������, �������� 0���� �ʱ�ȭ
//������2 
// �й� �̸��� �μ��� ������ �ϳ� �Է¹޾� �������� ��� ������ �ʱ�ȭ
//������3 
// �й��̸� �� �� �� ��� �Է¹޾� �ʱ�ȭ
//print() -> �к� �̸� �� �� �� ���� ���
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int id, kor, eng, mat;
	string name;
	
	Student(int id,string name) {
		this->id = id;
		this->name = name;
		kor = eng = mat = 0;
		print();
	}

	Student(int id, string name,int score) {
		this->id = id;
		this->name = name;
		kor = eng = mat = score;
		print();
	}

	Student(int id, string name, int kor,int eng,int mat) {
		this->id = id;
		this->name = name;
		this->kor = kor; this->eng = eng; this->mat = mat;
		print();
	}
	void print() {
		cout << "�й�:" << id << " " << "�̸�:" << name << " " << "����:" << kor << " " << "����:" << eng << " " << "����:" << mat << endl;
	}
};
int main() {
	Student a{ 2191004,"�̳���" };
	Student b{ 2191004,"���Թ�",50 };
	Student c{ 2191004,"������",90,88,80 };

	return 0;
}