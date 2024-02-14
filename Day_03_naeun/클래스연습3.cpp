//CarŬ����
//������� speed,gearcolor -> private
//speedUp(), speedDown(), printCar() ->public

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	//�Լ��� ������ �ۼ��ϰ� Ŭ���� �ܺο��� �ٽ� ����
	void speedUp();
	void speedDown(); 
	void printCar(); 
	int getSpeed(); //private����� ���� �����ϴ� �޼��� -> ������,get�޼���
	void setSpeed();//private��� ���� �����ϴ� �޼��� -> ������,set�޼���
public:
	int speed;
	int gear=5;

};

int main() {
	Car a;
	a.setSpeed(30);
	a.printCar();
	a.speedUp();
	a.printCar();
	a.speedDown();
	a.printCar();
	return 0;
}
//��� Ŭ������ �޼��������� namespace�� ����
int Car::getSpeed() {
	return speed;


}
int Car::setSpeed(int speed) {
	this->speed = speed;
}
void Car::printCar() {
	cout << color << " " << speed << " " << gear << endl;
}
void Car::speedUp() {
	 speed += 1; 
}

void Car::speedDown() {
	speed -= 1;
}
void Car::printCar() {
	cout << speed << endl; 
}