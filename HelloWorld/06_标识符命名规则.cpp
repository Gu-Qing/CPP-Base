#include <iostream>
using namespace std;

int test06() {
	/*
	* 给变量起名的时候最好能见名知意
	* 1.标识符不能是关键字
	* 2.标识符只能由字母、数字、下划线组成
	* 3.第一个字母不能为数字
	* 4.标识符区分大小写
	*/

	//int int = 10;
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;

	//int 123abc = 40;

	int aa = 100;
	int AA = 40;
	cout << "aa = " << aa << endl;
	cout << "AA = " << AA << endl;

	system("pause");

	return 0;
}