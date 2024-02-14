//person 클래스
//멤버변수 이름, 나이,키,몸무게
//멤버변수는 이름 나이 키 몸무게 출력하는 함수
#include <iostream>
#include <string>
using namespace std;

class Person {
public:	
	string name;
	int age;
	double height;
	double weight;

	void print() {
		cout << name <<" " << age << "세 " << height << "cm " << weight << "kg " << endl;
	}

	//멤버변수들의 값을 저장하는 함수
	void save(string name, int age, double height, double weight) {
		this->name = name;
		this->age = age;
		this->height = height;
		this->weight = weight;
	}
};

int main() {

	Person p;
	//이름 나이 키 몸무게 저장
	p.save("홍길동", 21, 176.6, 67.2);
	p.print(); //홍길동 21세 176.6cm 67,2kg


	p.name = "이나은";
	p.age = 25;
	p.height = 165.5;
	p.weight = 57.5;
	p.print(); //홍길동 21세 176.6cm 67,2kg

	return 0;
}