#include <iostream>
using namespace std;

int test24() {
	/*
	* 数组要放在一块连续的内存空间
	* 数组中每个元素都是相同的数据类型
	* 可以通过下标访问数组中的元素，下标是从0开始的
	*/

	int arr[5];
	arr[0] = 100;
	arr[4] = 200;
	cout << "arr[0] = " << arr[0] << endl;

	int arr1[5] = { 0, 1, 2, 3, 4 };
	cout << "arr1[0] = " << arr1[0] << endl;

	cout << "---------------------------" << endl;

	int arr2[] = { 9 , 8, 7, 6, 5 };
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}

	cout << "----------------------------" << endl;

	cout << "整个数组占用内存空间： " << sizeof(arr) << endl;
	cout << "每个元素占用内存空间： " << sizeof(arr[0]) << endl;
	cout << "数组中元素个数： " << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "数组首地址： " << (int)arr << endl;
	cout << "数组中第一个元素地址： " << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址： " << (int)&arr[1] << endl;

	//数组名是一个常量，不可以作赋值操作

	system("pause");

	return 0;
}