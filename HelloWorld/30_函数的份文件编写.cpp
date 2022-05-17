#include <iostream>
using namespace std;

/*
* 1.创建.h后缀名的头文件
* 2.创建.cpp后缀的源文件
* 3.在头文件中写函数的声明
* 4.在源文件中写函数的定义
* 5.在主函数的源文件中添加函数的声明即可调用
*/

void func1(int , int);

int test30() {

	func1(10, 20);

	system("pause");

	return 0;
}