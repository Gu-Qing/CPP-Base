#include <iostream>
using namespace std;

int test20() {

	int num = 0;
	while (num < 10) { //最少执行0次
		cout << num++ << endl;
	}

	cout << "----------------------------------" << endl;
	int n = -1;
	do { //最少执行1次
		cout << n++ << endl;
	} while (n > 0);

	cout << "-----------------------------------" << endl;

	//for循环
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	system("pause");

	return 0;
}