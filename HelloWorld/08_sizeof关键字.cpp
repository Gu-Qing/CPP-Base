#include <iostream>
using namespace std;

int test08() {

	//可以利用sizeof求出数据类型占用内存大小
	//语法：sizeof(数据类型or变量)
	//shrot < int <= long <= long long

	short num1 = 10;
	cout << "sizeof(shrot) = " << sizeof(num1) << endl;
	int num2 = 20;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	int num3 = 30;
	cout << "sizeof(long) = " << sizeof(num3) << endl;
	int num4 = 40;
	cout << "sizeof(long long) = " << sizeof(long long) << endl;

	system("pause");

	return 0;
}