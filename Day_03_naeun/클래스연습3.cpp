//Car클래스
//멤버변수 speed,gearcolor -> private
//speedUp(), speedDown(), printCar() ->public

#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	//함수의 원형만 작성하고 클래스 외부에서 다시 정의
	void speedUp();
	void speedDown(); 
	void printCar(); 
	int getSpeed(); //private멤버의 값을 리턴하는 메서드 -> 접근자,get메서드
	void setSpeed();//private멤버 값을 변경하는 메서드 -> 변경자,set메서드
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
//어느 클래스의 메서드인지를 namespace로 구분
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