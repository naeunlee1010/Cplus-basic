//��ü������ Ư¡
//1)ĸ��ȭ -> class
//2)�������� -> private
//3)��� -> Ŭ������ ��Ȱ��
//4)������ -> superŬ������ �����ͺ����� subŬ�������� ��Ī

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

	Unit* p; //super-sub���迡���� ���� UnitŸ�� p TankŸ�� a
	p = a;
	((Tank*)p)->move();
	p = b;
	((Carrier*)p)->move();
	p = c;
	((Drone*)p)->move();

	return 0;
}