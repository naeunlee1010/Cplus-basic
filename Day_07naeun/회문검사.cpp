#include"stack.h"


int main() {

	string s = "level1";
	//���� ��ü ����
	//���ڿ� s���� ó������ �ѱ��ھ� push()
	//���ڿ� s���� ù���ڿ� ���ÿ��� pop()�� �Ͱ� ��
	//(�ݺ�)
	//������ �ٸ� ���� ������ "ȸ��"
	//�ϳ��� �ٸ� ���� ������ "ȸ���� �ƴմϴ�"
	//ȸ��:�տ��� �о �ڿ��� �о ���� �ܾ�
	Stack<char> st;
	for (int i = 0; i < s.length(); i++) {
		st.push(s[i]);
	}
	bool b = true;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != st.pop()) b = false;
		

	}
	if (b == true) cout << "ȸ���Դϴ�" << endl;
	else cout << "ȸ���� �ƴմϴ�" << endl;
}