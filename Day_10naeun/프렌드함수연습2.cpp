//Rectangle클래스
//필드 가로 세로
//생성자 매개변수로 필드 초기화
//프랜드함수 add(Rect,Rect)

//add():두 사각형의 면적을 더한 값을 출력
#include<iostream>
#include<string>
using namespace std;

class Rect {
	int wid, hei;
public:
	Rect(int a,int b):wid(a),hei(b){}
	friend void add(Rect a,Rect b);

};
void add(Rect a, Rect b) {

	cout << "두 사각형의 면적의 합은? ";
	int aArea = a.wid * a.hei;
	int bArea = b.wid * b.hei;
	cout << aArea + bArea << endl;
}

//retutn하기
//double add(Rect a, Rect b) {
//
//	cout << "두 사각형의 면적의 합은? ";
//	int aArea = a.wid * a.hei;
//	int bArea = b.wid * b.hei;
//	double sum = aArea + bArea;
//	return sum;
//	
//}

int main() {

	Rect a(3, 5);
	Rect b(5, 6);
	add(a, b);//40출력
	return 0;
}