//Customer Ŭ����
//�ʵ�: ����ȣ, 1���� ���������� ����
//      ���ϸ��� 1000 �ʱ�ȭ
//      ��, 5��° �����Դ� 5000���� �ʱ�ȭ
//������ 
//����ȣ�� ���ϸ����� ���

#include<iostream>
using namespace std;

class Customer {
	int id, ma;
	static int count;
public:
	Customer() {
		id = 1 + count;
		count++;
		cout<<count<<"��° ��"<<
	}
};
int Customer::count = 0;

int main() {

	Customer c1;
	Customer c2;
	Customer c3;
	Customer c4;
	Customer c5;
	Customer c6;
	Customer c7;


	return 0;
}