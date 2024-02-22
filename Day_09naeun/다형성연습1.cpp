#include<iostream>
#include<string>
using namespace std;


class Animal {
public:
	virtual void speak(){} //void speak(){}�� �ϸ� Animal�� speak()�� ȣ��ż� �ƹ��͵� �� ����
	//�׷��ٰ� ���ָ� ������ ��ü�� �ȵ�
};
//Cat Dog Cow Ŭ����->AnimalŬ���� ���

class Cat :public Animal {
public:
	void speak() {
		cout << "�߿�" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "�۸�" << endl;
	}
};

class Cow :public Animal {
public:
	void speak() {
		cout << "����" << endl;
	}
};


int main() {

	Animal* a = new Cat();
	Animal* b = new Dog();
	Animal* c = new Cow();

	a->speak();//"�߿�"
	b->speak();//"�۸�"
	c->speak();


}