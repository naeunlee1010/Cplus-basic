#include<iostream>
using namespace std;

template<typename T>
class Box {
	T data;
public:
	void set(T);
	T get();
};
//���ø� Ŭ������ �Լ��� Ŭ���� �ܺο��� ������ ���, 
//���ø� �Լ����� ����ؾ� ��
template<typename T>
void Box<T>::set(T value) {
	data = value;
}

template<typename T>
T Box<T>::get() {
	return data;
}

int main() {

	Box<int> a;
	a.set(10);
	cout << a.get() << endl;

	Box<double> b;
	b.set(10.5);
	cout << b.get() << endl;

	Box<string> c;
	c.set("apple");
	cout << c.get() << endl;

	return 0;
}

