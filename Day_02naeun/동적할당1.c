//�޸𸮸� �Ҵ�
//���� �޸� �Ҵ�(static allocaation)
// //ũŰ�� ���� �Ǵ� ���� -> compile��
// //���μ��� �޸� ���� �� �����Ϳ���,���ÿ����� �Ҵ�
//���� �޸� �Ҵ�(dynamic allocation)
// //ũ�Ⱑ ���� �Ǵ� ���� -> runtime��
// //���μ��� �޸� ���� �� �������� �Ҵ�
#include <stdio.h>

int b;//���� �Ҵ�
int main() {
	int a;//���� �Ҵ�
	//int arr2[a]; (x)
	//c������ �����Ҵ�
	int* arr1 = (int*)malloc(sizeof(int) * 5);
	free(arr1);//c������ �����Ҵ� ����

	return 0;
}