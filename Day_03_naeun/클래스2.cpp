#include <iostream> 
#include <string>
using namespace std;

//Ŭ���� ���� ����� ù���� �빮��
//class Ŭ������{
//     ����������: �������;����Լ�;
//};
class Circle {
public://������ �޼������ �ҹ���
	int radius; 
	string color;

	double cArea() { 
		return radius * radius * 3.14;
	}
};

int main() {

	//Ŭ������ ����Ʋ,��ü�� ����
	Circle pizza1, pizza2;
	pizza1.radius = 100;
	pizza1.color = "yellow";
	cout << "������ ����" << pizza1.cArea() << endl;

	pizza2. radius = 200;
	pizza2.color = "white";
	cout<<"������ ����" << pizza2.cArea() << endl;


	return 0;
}