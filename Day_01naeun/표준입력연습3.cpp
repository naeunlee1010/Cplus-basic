#include <iostream>
using namespace std;

int main() {

	int arr[5] = { 0 };
	
	cout << "정수입력";
	cin >> arr[0]; cin >> arr[1]; cin >> arr[2]; cin >> arr[3]; cin >> arr[4];

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < 5; i++) {
		cout << arr[i];
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}
	cout << "max= " << max << "min = " << min << endl;

	return 0;
}