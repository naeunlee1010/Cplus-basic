#pragma once
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
	if (isfull() == true) return;//voidŸ���̴ϱ� �� TŸ������ ������ �ʿ� ����
	top++;
	arr[top] = value;
}

template <typename T>
T Stack<T>::pop() {
	if (isempty() == true) return(T)0;//���ĸŰ����� �����ؾ� �� int�϶��� 0,char�϶��� null����
	T removeitem = arr[top];
	top--;
	return removeitem;
}

template <typename T>
bool Stack<T>::isempty() {
	if (top == -1) return true;
	else false;
}

template <typename T>
bool Stack<T>::isfull() {
	if (top == size - 1) return true;
	else false;
}

template <typename T>
void Stack<T>::print() {
	for (int i = 0; i < top; i++)
		cout << arr[i] << " ";
	cout << "[top: " << top << "]" << endl;
}