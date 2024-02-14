//�������� vs ��ü����
//��ü���� ���(POP)
//  -> �Լ� ������ ���α׷�
//  -> �����Ϳ� ���(�Լ�)�� �и���
//�������� ���(OOP)
// -> Ŭ���� ������ ���α׷�
// -> �����Ϳ� ���(�޼���) ������

#include <iostream> 
#include <string>
#include <cstdio>
#include <cstring>
using namespace std;

//c��Ÿ���� ����ü
typedef struct {

	int radius;
	char color[30];

}Circle1;
double cArea(Circle1* c) {
	return c->radius * c->radius * 3.14;
}


//c++Ŭ����
class Circle2 {
public:
	int radius; //Ŭ������ �������
	string color;

	double cArea() { //����Լ�,�޼���(method)
		return radius * radius * 3.14;
	}
};


int main() {

	Circle1 a; //= { 10,"red" };
	a.radius = 10;
	strcpy_s(a.color, 30, "red");
	printf("%lf\n", cArea(&a));

	Circle2 b;//Circle2Ŭ������ ��ü(�ν��Ͻ�) b
	b.radius = 10;
	b.color = "red";
	//��ü��.����� -> �������������
	cout << b.cArea() << endl;

	return 0;
}