//����
//�迭,top,����ũ��
//push(),pop(),isempty(),isfull(),print()
//�ʱ�ȭ�Լ��� �����ڷ� ���

#include<iostream>
#include<string>
using namespace std;

template <typename T>
class Stack {
	T arr[100];
	int top;//�迭�� �ε���
	int size;//������ ũ��
public:
	Stack() {
		top = -1;
		size = 100;
	}
public:
	void push(T);
	T pop();
	bool isempty();
	bool isfull();
	void print();

};

template <typename T>
void Stack<T>::push(T value) {
	if (isfull() == true) return;
	top++;
	arr[top] = value;
}

template <typename T>
T Stack<T>::pop() {
	if (isempty() == true) return (T)0;
	int removeitem = arr[top];
	top--;
	return removeitem;
}

template <typename T>
bool Stack<T>:: isempty() {
	if (top == -1) return true;
	else false;
}

template <typename T>
bool Stack<T>:: isfull() {
	if (top == size - 1) return true;
	else false;
}

template <typename T>
void Stack<T>::print() {
	for (int i = 0; i < top; i++)
		cout << arr[i] << " ";
	cout << "[top: " << top << "]"<< endl;
}

int main() {

	/*Stack<int> st1;
	st1.push(10); st1.push(20); st1.push(30);
	st1.print();
	cout << st1.pop() << endl;
	st1.print();*/

	string s = "apple";
	//�� ���ھ� stack�� push()
	//stack�� pop()�� �ؼ� ���ڿ��� ����
	Stack<char> st;
	for (int i = 0; i < s.length(); i++) {
		st.push(s[i]);
	}
	
	string r = "";
	for (int i = 0; i < s.length(); i++) {
		r= r + st.pop();
	}
	cout << s << endl;
	cout << r << endl;



	return 0;
}