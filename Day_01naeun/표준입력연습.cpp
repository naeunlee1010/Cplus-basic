#include <iostream>
using namespace std;


int main() {
	string name,adress,hobby;
	int age;
	double height = 0.0;

	cout << "�̸�:";
	cin >> name ;

	cout << "����:";
	cin >> age;

	cout << "�ּ�:";
	cin >> adress;

	cout << "���:";
	cin >> hobby;

	cout << "����:";
	cin >> height;

	cout << name << age << adress << hobby << height << endl;

	return 0;
}