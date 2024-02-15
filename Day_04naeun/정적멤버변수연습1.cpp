//Student 클래스
//필드: 학번,이름
//이름은 생성자에서 인수로 입력받아 채우고
//학변을 생성한 순서대로 20240001부터 1씩 증가
//학번 이름을 생성자에서 출력

#include <iostream> 
#include <string>
using namespace std;

class Student {

	int id;
	string name;
	static int count;
public:
	Student(string n):name(n) {
		count++;
		id = 20240001 + count;
		id++;
		print();
	}
	void print() {
		cout << id << " " << name << " " << count << "명" << endl;
	}

};
int Student::count = 0;

int main() {

	Student s1{ "james" };//20240001 james
	Student s2{ "wade" };//20240002
	Student s3{ "paul" };

}