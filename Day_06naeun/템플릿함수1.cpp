//���ø�(template)
//�Լ��� Ŭ������ ������Ÿ���� Ÿ�ԸŰ������� ��ü�� ��
//�Ϲ�ȭ(generic) ���α׷���

#include<iostream>
#include<string>
using namespace std;

template<typename T>
T get_max(T a, T b) {
	if (a > b) return a;
	else return b;
}

//int get_max(int a, int b) {
//	if (a > b) return a;
//	else return b;
//}
//
//float get_max(float a, float b) {
//	if (a > b) return a;
//	else return b;
//}
//
//double get_max(double a, double b) {
//	if (a > b) return a;
//	else return b;
//}
//
//char get_max(char a, char b) {
//	if (a > b) return a;
//	else return b;
//}

int main() {

	cout << get_max(1, 10) << endl;
	cout << get_max(1.0f, 10.0f) << endl;
	cout << get_max(1.0, 10.0) << endl;
	cout << get_max('a', 's') << endl;

	return 0;
}