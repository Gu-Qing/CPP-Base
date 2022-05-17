#include <iostream>
using namespace std;

int test31() {
	int a = 10;
	//指针：数据类型 *指针变量名
	int* p = &a; //让指针p记录变量a的地址
	cout << "a的地址为： " << &a << endl;
	cout << "指针p为： " << p << endl;
	//指针所占内存空间
	//在32位操作系统下，指针站4个字节大小，不论数据类型
	//在64位操作系统下，指针站8个字节大小，不论数据类型
	cout << "sizeof(int *)" << sizeof(int*) << endl;
	cout << "sizeof(float *)" << sizeof(float*) << endl;
	cout << "sizeof(double *)" << sizeof(double*) << endl;
	cout << "sizeof(char *)" << sizeof(char*) << endl;

	//空指针：用于给指针变量进行初始化。不可以进行访问
	int* p1 = NULL; 
	//0~255之间的内存编号是系统占用的，也不可以直接访问
	//*p1 = 100; //系统会崩溃

	//野指针：指针变量指向非法的内存空间
	//在程序中，尽量避免出现野指针
	//int* p2 = (int *)0x1100;
	//cout << *p2 << endl; //引发了异常: 读取访问权限冲突。

	//空指针和野指针都不是我们申请的空间，不要访问


	system("pause");

	return 0;
}