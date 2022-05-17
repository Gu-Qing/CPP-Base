#include <iostream>
using namespace std;

int test25() {

	int arr[5] = { 300, 350, 200, 400, 250 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int nMax = 0;
	for (int i = 0; i < len; i++) {
		if (nMax < arr[i]) {
			nMax = arr[i];
		}
	}
	cout << "max = " << nMax << endl;

	system("pause");

	return 0;
}