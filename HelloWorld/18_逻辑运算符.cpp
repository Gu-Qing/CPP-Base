#include <iostream>
using namespace std;

int test18() {
	int a = 10;
	int b = 0;

	//ȡ��  �� ���漴��
	cout << "a = " << a << endl;
	cout << "!a = " << !a << endl;
	cout << "!!a = " << !!a << endl;
	cout << "b = " << b << endl;
	cout << "!b = " << !b << endl;
	cout << "!!b = " << !!b << endl;

	//�߼��� && ������Ϊ���Ϊ�棨ͬ��Ϊ�棬����Ϊ�٣�
	int c = 10;
	cout << "a && b = " << (a && b) << endl;
	cout << "a && c = " << (a && c) << endl;

	//�߼��� || ����Ϊ�ٲ�Ϊ�٣�ͬ��Ϊ�٣�����Ϊ�棩
	int d = 0;
	cout << "a || b = " << (a || b) << endl;
	cout << "b || d = " << (b || d) << endl;

	system("pause");

	return 0;
}