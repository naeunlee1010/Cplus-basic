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

	cout << max(1, 3, 5) << endl; //5
	cout << max(1.1, 3.5, 5.0); << endl; //5.5
	cout << max('a', 'b', 'c'); << endl; //c

	cout << min(1, 3, 5); << endl; //1
	cout << min(1.1, 3.5, 5.0); << endl; //1.1
	cout << min('a', 'b', 'c'); << endl; //'a'

	return 0;
}
