#include<iostream>
#include<string>
using namespace std;

int main() {
	//string Ŭ������ ������
	//<>== ������ ������ ��+ ���ڿ� ����
	string s1 = "apple";
	string s2 = "banana";

	cout << (s1, s2) << endl;
	cout << (s1 == "apple") << endl;
	cout << (s1 > s2) << endl;

	cout << (s1 + s2) << endl;

	//string Ŭ������ ����Լ�
	string s = "apple";

	cout << s[5] << endl; //����� �� �Ҵ��Ŵ //��ȿ�� ���ڰ� �ִ� �� üũ���� ����,at()���� ������ ����
	//cout << s.at(5) << endl; //��ȿ�� ���ڰ� �ִ��� üũ�� -> ������ ����� ���� �߻�

	cout << s.front() << endl; //ù���� ����
	cout << s.back() << endl;//������ ���� ����

	cout << s.length() << endl;//���ڿ� ���� ����
	cout << s.size() << endl;//���ڿ� ���� ����

	cout << s.capacity() << endl;//���ڿ��� ������� �޸� ũ�� ��ȯ
	s = "banana";
	cout << s.empty() << endl;
	s.erase(2, 2);//erase(n,m) n�� �ε������� m���� ���ڸ� ����
	cout << s << endl;
	s.push_back('��');//���� �ڿ� ()���� ���ڸ� ����
	cout << s << endl;
	s.pop_back();//���� ���� �ѱ��ڸ� ����
	cout << s << endl;

	cout << s.find("an") << endl;//()���� ���ڿ��� ��ġ(�ε���)�� ����
	cout << s.substr(1) << endl;//n��° �ε������� ������ ����
	cout << s.substr(2,2) << endl;//�κй��ڿ� ����

	return 0;
}