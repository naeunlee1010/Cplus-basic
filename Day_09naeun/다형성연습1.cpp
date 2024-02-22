#include<iostream>
#include<string>
using namespace std;


class Animal {
public:
	virtual void speak(){} //void speak(){}만 하면 Animal의 speak()가 호출돼서 아무것도 안 나옴
	//그렇다고 없애면 컴파일 자체가 안됨
};
//Cat Dog Cow 클래스->Animal클래스 상속

class Cat :public Animal {
public:
	void speak() {
		cout << "야옹" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "멍멍" << endl;
	}
};

class Cow :public Animal {
public:
	void speak() {
		cout << "음메" << endl;
	}
};


int main() {

	Animal* a = new Cat();
	Animal* b = new Dog();
	Animal* c = new Cow();

	a->speak();//"야옹"
	b->speak();//"멍멍"
	c->speak();


}