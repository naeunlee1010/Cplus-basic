#include<iostream>
using namespace std;

template<typename T1,typename T2>
class Box2 {
	T1 first;
	T2 secomd;
public:
	T1 getfirst();
	T2 getsecond();
	void get_first(T1 value) { first = value };
	void get_first(T1 value) { first = value };

};
template <typename T1,typename T2>
T1 Box2<T1, T2>::getfirst() { return first };

template <typename T1, typename T2>
T1 Box2<T1, T2>::getfirst() { return first };

int main() {

	Box2<int, double> a;
	a.get_first(10);
	a.set_first
}

