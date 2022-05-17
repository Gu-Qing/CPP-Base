#include <iostream>
using namespace std;

/*
* 函数的定义：
* 返回值类型 函数名(参数列表){函数体语句 return表达式}
*/
int add(int num1, int num2) { //形参
	int sum = num1 + num2;
	return sum;
}

void swap(int a, int b) { 
	int temp = a;
	a = b;
	b = temp;
	return ;
}

//函数的声明
int max(int a, int b);

int test29() {

	int a, b;
	cout << "Please enter a and b:" << endl;
	cin >> a >> b;
	//函数的调用。实参。
	int sum = add(a, b); 
	cout << "a + b = " << sum << endl;

	//值传递时，函数的形参发生改变，不会影响实参
	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	system("pause");

	return 0;
}
 //函数的定义
int max(int a, int b) {
	return a > b ? a : b;
}