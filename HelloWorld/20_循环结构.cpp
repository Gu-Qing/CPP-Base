#include <iostream>
using namespace std;

int test20() {

	int num = 0;
	while (num < 10) { //����ִ��0��
		cout << num++ << endl;
	}

	cout << "----------------------------------" << endl;
	int n = -1;
	do { //����ִ��1��
		cout << n++ << endl;
	} while (n > 0);

	cout << "-----------------------------------" << endl;

	//forѭ��
	for (int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	system("pause");

	return 0;
}