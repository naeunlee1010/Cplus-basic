//메모리를 할당
//정적 메모리 할당(static allocaation)
// //크키가 결정 되는 시점 -> compile시
// //프로세스 메모리 영역 중 데이터영역,스택영역에 할당
//동적 메모리 할당(dynamic allocation)
// //크기가 결정 되는 시점 -> runtime시
// //프로세스 메모리 영역 중 힙영역에 할당
#include <stdio.h>

int b;//정적 할당
int main() {
	int a;//정적 할당
	//int arr2[a]; (x)
	//c버전의 동적할당
	int* arr1 = (int*)malloc(sizeof(int) * 5);
	free(arr1);//c버전의 동적할당 해제

	return 0;
}