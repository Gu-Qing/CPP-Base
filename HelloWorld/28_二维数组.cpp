#include <iostream>

using namespace std;

int test28() {
	/*
	* ��ά����
	* 1.�������� ������[����][����];
	* 2.�������� ������[����][����] = {{����1, ����2}, {����3, ����4}};
	* 3.�������� ������[����][����] = {����1, ����2, ����3, ����4};
	* 4.�������� ������[][����] = {����1, ����2, ����3, ����4};
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
	* ��ά����������;
	* 1.�鿴ռ���ڴ�ռ��С
	* 2.�鿴��ά������׵�ַ
	*/

	cout << "��ά����ռ���ڴ�ռ䣺 " << sizeof(arr) << endl;
	cout << "��ά�����һ��ռ�õ��ڴ�ռ䣺 " << sizeof(arr[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ���ڴ�ռ䣺 " << sizeof(arr[0][0]) << endl;
	cout << "��ά����������� " << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά����������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "��ά������׵�ַ�� " << (int)arr << endl;
	cout << "��ά�����һ�е��׵�ַ�� " << (int)arr[0] << endl;
	cout << "��ά����ڶ����׵�ַ�� " << (int)arr[1] << endl;
	cout << "��ά�����һ��Ԫ�ص��׵�ַ�� " << (int)&arr[0][0] << endl;

	system("pause");

	return 0;
}