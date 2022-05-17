#include <iostream>
using namespace std;

int test18() {
	int a = 10;
	int b = 0;

	//取非  ！ 非真即假
	cout << "a = " << a << endl;
	cout << "!a = " << !a << endl;
	cout << "!!a = " << !!a << endl;
	cout << "b = " << b << endl;
	cout << "!b = " << !b << endl;
	cout << "!!b = " << !!b << endl;

	//逻辑与 && 两个都为真才为真（同真为真，其余为假）
	int c = 10;
	cout << "a && b = " << (a && b) << endl;
	cout << "a && c = " << (a && c) << endl;

	//逻辑或 || 两个为假才为假（同假为假，其余为真）
	int d = 0;
	cout << "a || b = " << (a || b) << endl;
	cout << "b || d = " << (b || d) << endl;

	system("pause");

	return 0;
}