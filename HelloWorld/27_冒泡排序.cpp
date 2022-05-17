#include <iostream>
using namespace std;

int test27() {
	/*
	* 比较相邻元素，如果第一个比第二个大就交换他们
	* 对每一对相邻元素做相同工作，执行完毕后找到第一个最大值
	* 重复以上步骤，每次比较次数-1
	*/
	int arr[9] = { 4, 2, 9, 8, 0, 5, 7, 3 , 6};
	int len = sizeof(arr) / sizeof(arr[0]);
	cout << "Before bubble sort: " << endl;
	for (int i = 0; i < len; i++) cout << arr[i] << " ";
	cout << endl;

	//冒泡排序，总排序次数为元素个数-1
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