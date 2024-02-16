//Person클래스를 작성
#include<iostream>
#include<string>
using namespace std;

class Person {
	static int countM, countW,count;
	string name,sex;

public:
	Person(string name, string sex):name(name),sex(sex) {
		if (sex == "남성") countM++;
		else if (sex == "여성") countW++;
		else cout << "성별 다시 입력해주시오." << endl;
	}

	static void printCountAll() {
		count = countM + countW;
		cout << "총 " << count << "명 " << "남자 " << countM << "명 " << "여자 " << countW << "명" << endl;
	}

	static void printCountMan() {
		cout << "남자 " << countM << "명" << endl;
	}

	static void printCountWoman() {
		cout << "여자 " << countW << "명" << endl;
	}

};
int Person::count = 0;
int Person::countM = 0;
int Person::countW = 0;

int main() {

	Person p1{ "이수현","남성" };
	Person p2{ "황현태","남성" };
	Person p3{ "강석준","남성" };
	Person p4{ "차규민","남성" };
	Person p5{ "이나은","여성" };
	Person p6{ "전세원","여성" };
	Person p7{ "인상민","남성" };
	Person p8{ "이민우","여성" };
	Person p9{ "강지수","여성" };

	Person::printCountAll();//총 9명 남자 4명 여자 5명
	Person::printCountMan();//남자 9명
	Person::printCountWoman();//여자 5명

	return 0;
}