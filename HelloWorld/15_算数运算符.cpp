#include <iostream>
using namespace std;

int test15() {

	//加减乘除
	int a = 10;
	int b = 3;
	cout << "a + b = " << a + b << endl; //13
	cout << "a - b = " << a - b << endl; //7
	cout << "a * b = " << a * b << endl; //30
	cout << "a / b = " << a / b << endl; //3

	double d1 = 3.14;
	double d2 = 2.0;
	cout << "d1 / d2 = " << d1 / d2 << endl; //1.57

	//取模运算 （只能是整数）
	cout << "a % b = " << a % b << endl; //1
	//cout << "10 % 0" << 10 % 0 << endl;  //除数是0不能做取模运算
	//cout << d1 % d2 << endl; //两个小数不能做取模运算

	/*
	* 前置后置递增递减
	*/
	int x = 10;
	int y = 10;
	cout << "x = " << x++ << endl;
	cout << "y = " << ++y << endl;

	system("pause");

	return 0;
}