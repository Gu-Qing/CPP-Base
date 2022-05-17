#include <iostream>
using namespace std;

int test07() {
	/*
	* 数据类型存在的意义：给变量分配合适的内存空间
	* short: 2bytes(-32768 ~ 32767)
	* int: 4bytes (-2,147,483,648 ~ 2,147,483,647)
	* long: 4bytes(windows、linux32)/8bytes(linux64)
	* long logn: 8bytes (-9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807)
	*/
	short num1 = 32768;
	int num2 = 32768;
	long num3 = 30;
	long long num4 = 40;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}