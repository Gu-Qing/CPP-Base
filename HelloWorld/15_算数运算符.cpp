#include <iostream>
using namespace std;

int test15() {

	//�Ӽ��˳�
	int a = 10;
	int b = 3;
	cout << "a + b = " << a + b << endl; //13
	cout << "a - b = " << a - b << endl; //7
	cout << "a * b = " << a * b << endl; //30
	cout << "a / b = " << a / b << endl; //3

	double d1 = 3.14;
	double d2 = 2.0;
	cout << "d1 / d2 = " << d1 / d2 << endl; //1.57

	//ȡģ���� ��ֻ����������
	cout << "a % b = " << a % b << endl; //1
	//cout << "10 % 0" << 10 % 0 << endl;  //������0������ȡģ����
	//cout << d1 % d2 << endl; //����С��������ȡģ����

	/*
	* ǰ�ú��õ����ݼ�
	*/
	int x = 10;
	int y = 10;
	cout << "x = " << x++ << endl;
	cout << "y = " << ++y << endl;

	system("pause");

	return 0;
}