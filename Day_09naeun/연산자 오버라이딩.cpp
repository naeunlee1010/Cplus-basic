#include<iostream>
#include<string>
using namespace std;

class Point {
	int x;
	int y;
public:
	Point(int a = 0,int b = 0):x(a),y(b){}
	void print() {
		cout << x << "," << y << endl;
	}
	Point operator+(const Point& c) {
		Point temp;
		temp.x = c.x + this->x;
		temp.y = c.y + this->y;
		return temp;
	}
};

int main() {

	Point a{ 1,1 };
	Point b{ 2,2 };
	Point c = a + b;
	c.print();

	return 0;
}