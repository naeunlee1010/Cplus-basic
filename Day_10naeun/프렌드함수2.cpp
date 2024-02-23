#include<iostream>
#include<string>
using namespace std;
//friend함수의 사용처
// ->객체를 비교하는 함수로 주로 사용됨

class Student {
	friend int equal(Student a, Student b);
	int id;
	string name;
public:
	Student(int x, string y) :id(x), name(y) {}
};
int equal(Student a, Student b) {
	if (a.id = b.id && a.name == b.name) return 1;
	else return 0;
}

int main() {

	Student a(20240001, "이나은");
	Student b(20240001, "차규민");
	Student c(20240002, "인상민");

	if (equal(a, b)) cout << "같은 학생입니다." << endl;
	else if (equal(a, b) == 0) cout << "다른 학생입니다." << endl;

	return 0;
}