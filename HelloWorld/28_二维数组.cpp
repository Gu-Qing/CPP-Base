#include <iostream>

using namespace std;

int test28() {
	/*
	* 二维数组
	* 1.数据类型 数组名[行数][列数];
	* 2.数据类型 数组名[行数][列数] = {{数据1, 数据2}, {数据3, 数据4}};
	* 3.数据类型 数组名[行数][列数] = {数据1, 数据2, 数据3, 数据4};
	* 4.数据类型 数组名[][列数] = {数据1, 数据2, 数据3, 数据4};
	*/
	int arr[2][3];
	for (int i = 0, k = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = k++;
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	cout << "------------------------------------" << endl;

	int arr2[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	cout << "------------------------------------" << endl;

	int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------" << endl;

	int arr4[][3] = { 1, 2, 3, 4, 5, 6 };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << "------------------------------------" << endl;

	/*
	* 二维数组名称用途
	* 1.查看占用内存空间大小
	* 2.查看二维数组的首地址
	*/

	cout << "二维数组占用内存空间： " << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存空间： " << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存空间： " << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "二维数组的首地址： " << (int)arr << endl;
	cout << "二维数组第一行的首地址： " << (int)arr[0] << endl;
	cout << "二维数组第二行首地址： " << (int)arr[1] << endl;
	cout << "二维数组第一个元素的首地址： " << (int)&arr[0][0] << endl;

	system("pause");

	return 0;
}