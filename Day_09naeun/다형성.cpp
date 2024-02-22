//객체지향의 특징
//1)캡슐화 -> class
//2)정보은닉 -> private
//3)상속 -> 클래스를 재활용
//4)다형성 -> super클래스의 포인터변수로 sub클래스들을 지칭

#include<iostream>
#include<string>
using namespace std;

class Unit {
protected:
	string tribe;
	int a = 1;
	a = 2;

public:
	void move() {
		cout << "move" << endl;
	}
	int a;
	a = 2;
};

class Tank : public Unit {
public:
	Tank() {
		Unit();
		tribe = "terran";
	}
	void move() { cout << "slow" << endl; }

	tribe = "terran";


};

class Carrier : public Unit {
public:
	Carrier() {
		Unit();
		tribe = "protoss";
	}
	void move() { cout << "flying" << endl; }
};

class Drone : public Unit {
public:
	Drone() {
		Unit();
		tribe = "zerg";
	}
	void move() { cout << "normal" << endl; }

	string tribe = "terran";


};

int main() {
	
	Tank* a = new Tank();
	Carrier* b = new Carrier();
	Drone* c = new Drone();

	Unit* p; //super-sub관계에서만 가능 Unit타입 p Tank타입 a
	p = a;
	((Tank*)p)->move();
	p = b;
	((Carrier*)p)->move();
	p = c;
	((Drone*)p)->move();

	return 0;
}