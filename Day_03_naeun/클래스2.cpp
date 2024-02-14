#include <iostream> 
#include <string>
using namespace std;

//클래스 명은 관계상 첫글자 대문자
//class 클래스명{
//     접근지정자: 멤버변수;멤버함수;
//};
class Circle {
public://변수나 메서드명은 소문자
	int radius; 
	string color;

	double cArea() { 
		return radius * radius * 3.14;
	}
};

int main() {

	//클래스를 와플틀,객체는 와플
	Circle pizza1, pizza2;
	pizza1.radius = 100;
	pizza1.color = "yellow";
	cout << "피자의 면적" << pizza1.cArea() << endl;

	pizza2. radius = 200;
	pizza2.color = "white";
	cout<<"피자의 면적" << pizza2.cArea() << endl;


	return 0;
}