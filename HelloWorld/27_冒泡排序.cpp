#include <iostream>
using namespace std;

int test27() {
	/*
	* �Ƚ�����Ԫ�أ������һ���ȵڶ�����ͽ�������
	* ��ÿһ������Ԫ������ͬ������ִ����Ϻ��ҵ���һ�����ֵ
	* �ظ����ϲ��裬ÿ�αȽϴ���-1
	*/
	int arr[9] = { 4, 2, 9, 8, 0, 5, 7, 3 , 6};
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "Before bubble sort: " << endl;
	for (int i = 0; i < len; i++) cout << arr[i] << " ";
	cout << endl;

	//ð���������������ΪԪ�ظ���-1
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "After bubble sort: " << endl;
	for (int i = 0; i < len; i++) cout << arr[i] << " ";
	cout << endl;

	system("pause");

	return 0;
}