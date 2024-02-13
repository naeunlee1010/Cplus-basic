#include <stdlib.h> 

int main() {

	char* p = (char*)malloc(10);
	p = (char*)realloc(p, 20);//동적할당메모리 재할당
	p = (char*)realloc(p, 5);

	char* a = new char[5];
	//c++에서는 동적할당한 메모리를 재할당 할 수 없음
	//char형은 기본 변수형 string은 클래스 char형은 거의 안 씀

	delete[] a; //동적할당 해제 후
	a = new char[10]; //다시 할당해야 함 (사실상 의미 없음 재할당은 값 남길라고 하는 것)

	char* b = new char[10];
	for (int i = 0; i < 5; i++)
		b[i] = a[i];


	return 0;
}