#include <iostream>
using namespace std;

int test32() {
	/*
	* ��const�Ҳ���ŵ���ָ��*���ǳ���p
	* ��ָ����ǳ���ָ�� const int *p
	* �ǳ�������ָ�볣�� int *const p
	*/

	int a = 10; 
	int b = 20;
	//1.const����ָ��
	const int* p = &a; //ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//*p = 20;
	p = &b;

	//2.const���γ���
	int* const p2 = &a; //ָ��ָ���ֵ���Ըģ�ָ���ָ�򲻿��Ը�
	*p2 = 20;
	//p2 = &b;


	//3.const����ָ��ͳ���
	const int* const p3 = &a; //ָ���ָ���ֵ�������Ը�
	//*p3 = 30;
	//p3 = &b;

	system("pause");

	return 0;
}