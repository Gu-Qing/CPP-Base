#include <iostream>
using namespace std;

void exch(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i ++ ) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] < arr[j + 1]) exch(&arr[j], &arr[j + 1]);
		}
	}
}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) cout << arr[i] << " ";
	cout << endl;
}

int test35() {

	int arr[10] = { 7, 3, 6, 9, 2, 5, 4, 8, 0, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sort: " << endl;
	printArray(arr, len);
	bubbleSort(arr, len);
	cout << "After sort: " << endl;
	printArray(arr, len);

	system("pause");

	return 0;
}