#include<iostream>
#include<string>
using namespace std;
//templateŬ����(�Ϲ�ȭŬ����,genericŬ����)
//Ÿ�� �Ű������� ����� Ÿ���� ���ϴ� Ŭ����
template <typename T,typename K>

class Ta {
public:
	T a;
	K b;
};

int main() {

	Ta<int,int> a;
	a.a = 10;
	Ta<double,int> b;
	b.a = 10.5;
	Ta<string,sring> c;
	c.a = "apple";

	return 0;
}