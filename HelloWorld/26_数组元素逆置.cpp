#include <iostream>
using namespace std;

int test26() {

	int arr[5] = { 1, 3, 2, 5, 4 };
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int len = sizeof(arr) / sizeof(arr[0]);
	int start = 0, end = len - 1;

	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		++start, --end;
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;

	system("pause");

	return 0;
}