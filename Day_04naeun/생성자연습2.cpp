//Car Ŭ���� 
//private�ʵ� speed,geer -> int, color ->string
//public�޼��� ������ -> �������� �μ��� �Է¹޾� �ʵ带 �ʱ�ȭ
//            print() -> �����ڿ��� ȣ��

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public: //default �Ű�����
	Car(int a=50, int b=1, string c="white") :speed(a), gear(b), color(c) {
		print();
	}
	/*Car(int speed, int gear, string color) {
		this->speed = speed;
		this->gear = gear;
		this->color = color;
		print();
	}*/
	void print() {
		cout << "�ӷ�:" << speed << " " << "���" << gear << "��" << " " << "����:" << color << endl;
	}
};

int main() {

	Car a{ 100,5,"red" };
	Car b{ 90,4,"yellow" };
	Car c;
	Car d{ 70 };
	Car e{ 120,3 };

	return 0;
}