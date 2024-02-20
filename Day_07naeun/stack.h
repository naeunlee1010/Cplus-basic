#pragma once
#include<iostream>
#include<string>
using namespace std;

template <typename T>
class Stack {
	T arr[100];
	int top;//배열의 인덱스
	int size;//스텍의 크기
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
	if (isfull() == true) return;//void타입이니깐 꼭 T타입으로 리턴할 필요 없음
	top++;
	arr[top] = value;
}

template <typename T>
T Stack<T>::pop() {
	if (isempty() == true) return(T)0;//형식매개변수 지정해야 함 int일때는 0,char일때는 null문자
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