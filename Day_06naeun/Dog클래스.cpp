//DogŬ����
//�ʵ� ǰ��,����
//ǰ�� {Ǫ��,����,������,����Ƽ��,�ù�} �� ����
//���� 3~9 �� ����
//ǰ���� ���� ���

//DogŬ������ ��ü�� 5�� �����Ͻÿ�
//���� 5����,,,
#include<iostream>
#include<string>
#include<random>
using namespace std;

class Dog {
private:
	string kind[5] = { "Ǫ��","����","������","����Ƽ��","�ù�"};
	int month;
public:

	Dog() {
		random_device rd;
		uniform_int_distribution<int> dis1(0, 4);
		uniform_int_distribution<int> dis2(3, 9);
		month = dis2(rd);
		cout << kind[dis1(rd)] << " " << month << "����" << endl;
	}
};
int main() {
	int a;
	a = 10;


	Dog a;
	Dog b;
	Dog c;
	Dog d;
	Dog e;

	return 0;

}