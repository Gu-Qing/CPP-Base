#include <iostream>
#include <string> //使用字符串string类型要包含的头文件
using namespace std;

int test12() {
	/*
	* 字符串型，两种风格
	* 1.C风格：char 变量名[] = "字符串值";
	* 2.C++风格：string 变量名 = "字符串值";
	*/

	char str[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
	cout << "str = " << str << endl; //因为不会自动添加'\0'所以会显示乱码
	cout << "sizeof(str) = " << sizeof(str) << endl; // 11

	//str1实际长度为12，后面还有一个隐藏的'\0'
	char str1[] = "Hello World";
	cout << "str1 = " << str1 << endl;
	cout << "sizeof(str1) = " << sizeof(str1) << endl; // 12

	string str2 = "Hello World"; //引用数据类型
	cout << "str2 = " << str2 << endl;
	cout << "sizeof(str2) = " << sizeof(str2) << endl; //28，固定的，由编译器决定的

	system("pause");

	return 0;
}