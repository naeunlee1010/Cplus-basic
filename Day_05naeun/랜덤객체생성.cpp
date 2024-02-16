//Dog클래스
//필드 품종, 개월
//품종 푸들,시츄,진돗개,마르티스,시바 중 랜덤
//개월 3~9개월 중 랜덤
//품종,개월 출력
// ex)시츄 5개월
//    푸들 3개월
//    ....
//Dog클래스 객체를 5개 생성하시오.

#include<iostream>
#include<string>
#include<random>
using namespace std;

random_device(rd);
uniform_int_distribution<int> dis1(0, 4);
uniform_int_distribution<int> dis2(3, 9);

class Dog {
private:
	string pum[100] = { "" };
	int month;
public:
	Dog() {

	}
	void print() {

	}
};
