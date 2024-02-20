#include<iostream>
#include<string>
using namespace std;
template<typename T>
T max(T a, T b, T c) {
	T max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	return max;

}
template<typename T>
T min(T a, T b, T c) {
	T min = a;
	if (max > b) max = b;
	if (max > c) max = c;
	return min;

}


int main() {

	cout << max(1, 3, 5) << endl;
	max(1.1, 3.5, 5.0);
	max('a', 'b', 'c');

	min(1, 3, 5);
	min(1.1, 3.5, 5.0);
	min('a', 'b', 'c');

	return 0;
}