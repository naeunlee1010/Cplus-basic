//Car 클래스 
//private필드 speed,geer -> int, color ->string
//public메서드 생성자 -> 세가지를 인수로 입력받아 필드를 초기화
//            print() -> 생성자에서 호출

#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed, gear;
	string color;
public: //default 매개변수
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
		cout << "속력:" << speed << " " << "기어" << gear << "단" << " " << "색깔:" << color << endl;
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