#include <iostream>
using namespace std;

int test13() {

	//bool类型本质上 1表示真，0表示假
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	cout << "sizeof(bool) = " << sizeof(bool) << endl;

	system("pause");

	return 0;
}