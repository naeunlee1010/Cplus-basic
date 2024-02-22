#include<iostream>
using namespace std;

template<typename T1,typename T2>
class Box2 {
	T1 first;
	T2 secomd;
public:
	T1 get_first();
	T2 get_second();
	void set_first(T1 value) { first = value };
	void set_second(T1 value) { first = value };

};
template <typename T1,typename T2>
T1 Box2<T1, T2>::get_first() { return first; }

template <typename T1, typename T2>
T1 Box2<T1, T2>::get_second() { return first; }

int main() {

	Box2<int, double> a;
	a.get_first(10);
	a.set_second(3.14);

	cout<<a.get_first()<<endl;
	cout<<a.get_second()<<endl;

	return 0;
}

