//이름:홍길동(엔터)
//이름:ㄴㄴㄴ(엔터)
//이름:ㄱㄱㄱ(엔터)
//.
//.
//.
//이름:end
//출력: 홍길동 ㄴㄴㄴ ㄱㄱㄱ ...
//청소당번1:홍길동
//청소당번2:ㄴㄴㄴ

#include<iostream>
#include<string>
#include<random>
using namespace std;

int main() {

	
	int count = 0;
	string name[100] = {""};

	for (int i = 0; i < 10; i++) {
		string temp;
		cout << "이름: ";
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
		cout << "청소당번1: "<< name[index] << endl;
		cout << "청소당번2: "<< name[index] << endl;
	}
	
	string a = name[dist(rd)];
	string b = name[dist(rd)];
	for (int i = 0; i < 2; i++) {
		string b = name[dist(rd)];
		if (b == name[i - 1] && i > 0) {
			i--;
			continue;
		}
		cout << "청소당번" << i + 1 << ": " << b << endl;
	return 0;
}