#include <iostream>
using namespace std;

int test10() {
	/*
	* 字符型变量用于显示单个字符
	* 1.显示字符型变量时，需要用单引号将字符括起来，不能用双引号
	* 2.单引号内只能有一个字符
	* 3.C和C++中字符型变量只占用一个字节
	* 4.字符型变量并不是吧字符本身放到内存中去存储，而是将对应的ASCII编码放入到存储单元
	*/

	char ch = 'a';
	cout << "ch = " << ch << endl;

	cout << "sizeof(char) = " << sizeof(char) << endl;

	//char ch2 = "a";
	//char ch2 = 'abcd';
	cout << "(int)ch = " << (int)ch << endl;
	/*
	* ASCII码大致分为两部分：
	* 1.非打印控制字符：0-31分配给了控制字符，用于控制像打印机等一些外围设备
	* 2.32-126分配给了能在键盘上找到的字符，当查看或打印文档时会出现
	*/
	ch = 97;
	cout << "(char)ch = " << ch << endl;

	system("pause");

	return 0;
}