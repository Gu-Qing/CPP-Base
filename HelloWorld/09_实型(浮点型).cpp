#include <iostream>
using namespace std;

int test09() {
	//单精度：float  有效数字范围：7位
	//双精度：double 有效数字范围：15~16位
	//默认情况下，输出一个小数会显示六位有效数字
	float f1 = 3.1415926f; //不加f 3.14默认是double

	cout << "f1 = " << f1 << endl; //3.14159

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl; //3.14159

	//统计float和double所占用的内存空间
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;

	//科学计数法
	float f2 = 3e2f; //3 * 10^2
	cout << "f2 = " << f2 << endl; //300
	float f3 = 3e-2f; //3 * 0.1^2
	cout << "f3 = " << f3 << endl; //0.03

	system("pause");

	return 0;
}