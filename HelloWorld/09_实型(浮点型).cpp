#include <iostream>
using namespace std;

int test09() {
	//�����ȣ�float  ��Ч���ַ�Χ��7λ
	//˫���ȣ�double ��Ч���ַ�Χ��15~16λ
	//Ĭ������£����һ��С������ʾ��λ��Ч����
	float f1 = 3.1415926f; //����f 3.14Ĭ����double

	cout << "f1 = " << f1 << endl; //3.14159

	double d1 = 3.1415926;

	cout << "d1 = " << d1 << endl; //3.14159

	//ͳ��float��double��ռ�õ��ڴ�ռ�
	cout << "sizeof(float) = " << sizeof(float) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;

	//��ѧ������
	float f2 = 3e2f; //3 * 10^2
	cout << "f2 = " << f2 << endl; //300
	float f3 = 3e-2f; //3 * 0.1^2
	cout << "f3 = " << f3 << endl; //0.03

	system("pause");

	return 0;
}