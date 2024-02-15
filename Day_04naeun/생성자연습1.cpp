//Student 클래스
//학번, 이름 국영수 점수 -> 필드
//생성자1 
// 학번 이름을 인수로 입력받아 저장 생성자, 국영수를 0으로 초기화
//생성자2 
// 학번 이름을 인수로 점수를 하나 입력받아 국영수를 모두 점수로 초기화
//생성자3 
// 학번이름 국 영 수 모두 입력받아 초기화
//print() -> 학변 이름 국 영 수 점수 출력
#include <iostream>
#include <string>
using namespace std;

class Student {
public:
	int id, kor, eng, mat;
	string name;
	
	Student(int id,string name) {
		this->id = id;
		this->name = name;
		kor = eng = mat = 0;
		print();
	}

	Student(int id, string name,int score) {
		this->id = id;
		this->name = name;
		kor = eng = mat = score;
		print();
	}

	Student(int id, string name, int kor,int eng,int mat) {
		this->id = id;
		this->name = name;
		this->kor = kor; this->eng = eng; this->mat = mat;
		print();
	}
	void print() {
		cout << "학번:" << id << " " << "이름:" << name << " " << "국어:" << kor << " " << "영어:" << eng << " " << "수학:" << mat << endl;
	}
};
int main() {
	Student a{ 2191004,"이나은" };
	Student b{ 2191004,"차규민",50 };
	Student c{ 2191004,"전세원",90,88,80 };

	return 0;
}