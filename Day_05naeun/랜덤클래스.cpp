//random Ŭ����
//���� �ѹ�(����)�� �߻���Ű�� Ŭ����
#include <iostream>
#include<random>
using namespace std;

int main() {

	random_device a; //random_device�� ��ü�� ����
	mt19937 gen(a());//���� ���� ���� mt19937�� �ʱ�ȭ
	uniform_int_distribution<int> dis(1, 3); //������ ���� ����

	for (int i = 0; i < 10; i++) {
		cout << dis(gen) << " ";
		      //��������
	}


	return 0;
}