//Unit클래스
//필드 kind
//메서드 move()//move 출력

//Unit의 서브클래스
// Tank 종족 terran move()//slow 출력
// Carrier 종족 protos move()//flying 출력
// Drone 종족 zerg move()//normal 출력
//

#include<iostream>
#include<string>
using namespace std;

int a;
a = 10;
class Unit {
protected:
	string tribe;
	
	
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

class Carrier: public Unit {
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
	
	Tank a;
	Carrier b;
	Drone c;
	a.move();
	b.move();
	c.move();

	return 0;
}