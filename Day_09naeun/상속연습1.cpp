//UnitŬ����
//�ʵ� kind
//�޼��� move()//move ���

//Unit�� ����Ŭ����
// Tank ���� terran move()//slow ���
// Carrier ���� protos move()//flying ���
// Drone ���� zerg move()//normal ���
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