#include <iostream>
using namespace std;


int main() {
	string name,adress,hobby;
	int age;
	double height = 0.0;

	cout << "이름:";
	cin >> name ;

	cout << "나이:";
	cin >> age;

	cout << "주소:";
	cin >> adress;

	cout << "취미:";
	cin >> hobby;

	cout << "신장:";
	cin >> height;

	cout << name << age << adress << hobby << height << endl;

	return 0;
}