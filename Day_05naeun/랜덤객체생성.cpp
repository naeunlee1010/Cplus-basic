//DogŬ����
//�ʵ� ǰ��, ����
//ǰ�� Ǫ��,����,������,����Ƽ��,�ù� �� ����
//���� 3~9���� �� ����
//ǰ��,���� ���
// ex)���� 5����
//    Ǫ�� 3����
//    ....
//DogŬ���� ��ü�� 5�� �����Ͻÿ�.

#include<iostream>
#include<string>
#include<random>
using namespace std;

random_device(rd);
uniform_int_distribution<int> dis1(0, 4);
uniform_int_distribution<int> dis2(3, 9);

class Dog {
private:
	string pum[100] = { "" };
	int month;
public:
	Dog() {

	}
	void print() {

	}
};
