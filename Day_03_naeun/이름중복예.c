//Ŭ����5���Ͽ���
#include <stdio.h>
#include <iostream>

void print(int a) { printf("%d\n", a); }
void print(double a) {printf("%lf\n", a); }
void print(char* a) { printf("%s\n", a); }

int main() {

	print(10);

	return 0;
	}