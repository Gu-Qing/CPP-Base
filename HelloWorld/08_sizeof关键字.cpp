#include <iostream>
using namespace std;

int test08() {

	//��������sizeof�����������ռ���ڴ��С
	//�﷨��sizeof(��������or����)
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