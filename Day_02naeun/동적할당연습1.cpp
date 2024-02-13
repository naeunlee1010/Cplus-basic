//연습문제 7-1

#include <iostream>
using namespace std;

int main() {
	int num=0;
	cout << "성적을 입력할 학생 수:";
	cin >> num;

	cout << num << "명의 학생 점수를 입력하시오" << endl;
	int* arr = new int[num];
	for(int i=0;i<num;i++)
		cin >> arr[i];


	int tot = 0;
	double avg = 0.0;
	int max = arr[0];
	for (int i = 0; i < num; i++) {
		tot = tot + arr[i];
		if (max < arr[i])
			max = arr[i];
	}
		
	avg = tot / num;
	
	
		

	cout << "학생수:" << num << endl;
	cout << "총합:" << tot << endl;
	cout << "평균:" << avg << endl;
	cout << "최대값:" << max << endl;

	delete[] arr;


	return 0;
}