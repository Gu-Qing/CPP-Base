#include <iostream>
#include <string> //ʹ���ַ���string����Ҫ������ͷ�ļ�
using namespace std;

int test12() {
	/*
	* �ַ����ͣ����ַ��
	* 1.C���char ������[] = "�ַ���ֵ";
	* 2.C++���string ������ = "�ַ���ֵ";
	*/

	char str[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
	cout << "str = " << str << endl; //��Ϊ�����Զ����'\0'���Ի���ʾ����
	cout << "sizeof(str) = " << sizeof(str) << endl; // 11

	//str1ʵ�ʳ���Ϊ12�����滹��һ�����ص�'\0'
	char str1[] = "Hello World";
	cout << "str1 = " << str1 << endl;
	cout << "sizeof(str1) = " << sizeof(str1) << endl; // 12

	string str2 = "Hello World"; //������������
	cout << "str2 = " << str2 << endl;
	cout << "sizeof(str2) = " << sizeof(str2) << endl; //28���̶��ģ��ɱ�����������

	system("pause");

	return 0;
}