#include <iostream>
using namespace std;

int test16() {
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;
	a += 10;
	cout << "a = " << a << endl;
	a -= 10;
	cout << "a = " << a << endl;
	a *= 10;
	cout << "a = " << a << endl;
	a /= 10;
	cout << "a = " << a << endl;
	a %= 8;
	cout << "a = " << a << endl;

	system("pause");

	return 0;
}