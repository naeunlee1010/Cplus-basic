//string Ŭ���� C++�� ���ڿ� ���� Ŭ����
//���ڿ��� �����ϴ� ��� �ܿ� �������� ���ڿ� ���� ����Լ����� ����
// 
//CŸ���� ���ڿ��� �� �ڿ� '\0'(null)���ڰ� ���ԵǾ�����
//stringŸ���� ���ڿ����� ���Ե��� ����
//�������� ���ڿ��� ���̸� ���氡��

#include<iostream>
#include<string>
using namespace std;

int main() {

	string s,str;
	//�����
	//cin >> s;
	getline(cin, s);//getline(�Է½�Ʈ��, �����Һ���)
	getline(cin, s, 'a');//'a'�������� ���ڿ��� �Է�
	cout << s << endl;

	//string��ü �������
	str = "apple";//���Կ����ڷ� ���ڿ� ����
	string str1("apple");//�����ڷ� ���ڿ� ����
	char arr[] = { 'a','c','e' };
	string str1(arr);//char�� �迭�� ����

	string* str3 = new string("apple");//�����Ҵ����� ����
	

	return 0;
}