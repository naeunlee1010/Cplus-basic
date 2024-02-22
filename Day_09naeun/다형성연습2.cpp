#include<iostream>
#include<string>
using namespace std;
///�߻�Ŭ���� Animal����

class Animal {
public:
	virtual void move() = 0;//virtual void �Լ���() = 0;
	virtual void eat() = 0;
	virtual void speak() = 0;
};

class Lion :public Animal {
public:
	void move() {
		cout << "������ move()" << endl;
	}

	void eat() {
		cout << "������ eat()" << endl;
	}

	void speak() {
		cout << "������ speak()" << endl;
	}

};

int main() {

	Animal* a = new Lion();
	a->move();//������ move()
	a->eat();//������ eat()
	a->speak();//������ speak()

	Lion c;
	Animal& b = c;
	b.move();//������ move()
	b.eat();
	b.speak();


	return 0;
}