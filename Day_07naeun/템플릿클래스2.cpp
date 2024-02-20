#include<iostream>
using namespace std;

template<typename T>
class Box {
	T data;
public:
	void set(T);
	T get();
};
//템플릿 클래스위 함수를 클래스 외부에서 정의할 경우, 
//템플릿 함수임을 명시해야 함
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

