#include <iostream>
using namespace std;

//static �������
//->�޸��� ������ ������ �Ҵ�
//->Ŭ������ ��� ��ü�� �����ϴ� ����
//->��ü�� �������� �ʾƵ� ��������� ����

class Circle {
public:
	int radius;
	static int count; // static �������
	                  //�����Ϳ����� �Ҵ� //Ŭ������ ��� ��ü���� �ϳ��� count��������� ����
	Circle() {
		radius = 0;
		radius++;
		count++;
		cout << radius << " "<< count << endl;
	}
};
int Circle::count = 0;

int main() {

	Circle c1;
	Circle c2;
	Circle c3;

	return 0;
}