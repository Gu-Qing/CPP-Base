#include <iostream>
using namespace std;

int test24() {
	/*
	* ����Ҫ����һ���������ڴ�ռ�
	* ������ÿ��Ԫ�ض�����ͬ����������
	* ����ͨ���±���������е�Ԫ�أ��±��Ǵ�0��ʼ��
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

	cout << "��������ռ���ڴ�ռ䣺 " << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ䣺 " << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ����� " << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "�����׵�ַ�� " << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַ�� " << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַ�� " << (int)&arr[1] << endl;

	//��������һ������������������ֵ����

	system("pause");

	return 0;
}