#include<iostream>
#include<string>
using namespace std;
///추상클래스 Animal생성

class Animal {
public:
	virtual void move() = 0;//virtual void 함수명() = 0;
	virtual void eat() = 0;
	virtual void speak() = 0;
};

class Lion :public Animal {
public:
	void move() {
		cout << "사자의 move()" << endl;
	}

	void eat() {
		cout << "사자의 eat()" << endl;
	}

	void speak() {
		cout << "사자의 speak()" << endl;
	}

};

int main() {

	Animal* a = new Lion();
	a->move();//사자의 move()
	a->eat();//사자의 eat()
	a->speak();//사자의 speak()

	Lion c;
	Animal& b = c;
	b.move();//사자의 move()
	b.eat();
	b.speak();


	return 0;
}