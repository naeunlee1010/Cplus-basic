//random 클래스
//랜덤 넘버(난수)를 발생시키는 클래스
#include <iostream>
#include<random>
using namespace std;

int main() {

	random_device a; //random_device의 객체를 생성
	mt19937 gen(a());//난수 생성 엔진 mt19937을 초기화
	uniform_int_distribution<int> dis(1, 3); //난수의 범위 지정

	for (int i = 0; i < 10; i++) {
		cout << dis(gen) << " ";
		      //난수생성
	}


	return 0;
}