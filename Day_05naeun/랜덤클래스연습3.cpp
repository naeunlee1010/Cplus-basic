//�̸�:ȫ�浿(����)
//�̸�:������(����)
//�̸�:������(����)
//.
//.
//.
//�̸�:end
//���: ȫ�浿 ������ ������ ...
//û�Ҵ��1:ȫ�浿
//û�Ҵ��2:������

#include<iostream>
#include<string>
#include<random>
using namespace std;

int main() {

	
	int count = 0;
	string name[100] = {""};

	for (int i = 0; i < 10; i++) {
		string temp;
		cout << "�̸�: ";
		cin >> temp;
		if (temp == "end") break;
		name[i] = temp;
		count++;
	}
	

	random_device rd;
	uniform_int_distribution<int> dist(0,count-1);

	for (int i = 0; i < count; i++) 
		cout << name[i] << " ";
	cout << endl; 

	for (int i = 0; i < 1; i++) {
		int index = dist(rd);
		cout << "û�Ҵ��1: "<< name[index] << endl;
		cout << "û�Ҵ��2: "<< name[index] << endl;
	}
	
	string a = name[dist(rd)];
	string b = name[dist(rd)];
	for (int i = 0; i < 2; i++) {
		string b = name[dist(rd)];
		if (b == name[i - 1] && i > 0) {
			i--;
			continue;
		}
		cout << "û�Ҵ��" << i + 1 << ": " << b << endl;
	return 0;
}