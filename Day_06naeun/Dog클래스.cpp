//Dog클래스
//필드 품종,개월
//품종 {푸들,시츄,진돗개,마르티스,시바} 중 랜덤
//개월 3~9 중 랜덤
//품종과 개월 출력

//Dog클래스의 객체를 5개 생성하시오
//시츄 5개월,,,
#include<iostream>
#include<string>
#include<random>
using namespace std;

class Dog {
private:
	string kind[5] = { "푸들","시츄","진돗개","마르티스","시바"};
	int month;
public:

	Dog() {
		random_device rd;
		uniform_int_distribution<int> dis1(0, 4);
		uniform_int_distribution<int> dis2(3, 9);
		month = dis2(rd);
		cout << kind[dis1(rd)] << " " << month << "개월" << endl;
	}
};
int main() {
	int a;
	a = 10;


	Dog a;
	Dog b;
	Dog c;
	Dog d;
	Dog e;

	return 0;

}