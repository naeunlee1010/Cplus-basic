#include<iostream>
#include<string>
using namespace std;

class Rect {
	int wid, hei;
public:
	Rect(int a, int b) :wid(a), hei(b) {}
	//������ �����ε�
	//->�������� ����� �޼���ó�� ����
	//->��ü�� �ǿ����ڰ� �� �� ����
	//->���� ��ü�� ù��° �ǿ�����, �Ű������� �ι�° �ǿ�����
	double operator+(Rect a) { //
		int result = wid * hei + a.wid * a.hei;
		return (double)result;
	}

	void print() { cout << "w=" << wid << "h=" << hei << endl; }
	Rect operator*(int a) {
		wid = wid * a;
		hei = hei * a;
		return *this;
	}

	void operator>(int a) {
		cout << "w=" << wid << "h=" << hei << endl;
	}

};

int main() {

	Rect a(3, 5);
	Rect b(5, 6);
	cout<<a+b<<endl;//40���


	a.print();
	a > 1; //w=3,h=5
	a = a * 2;//�����踸ŭ ���μ��α��̸� �ø� ��ü�� ����
	a.print();

	return 0;
}