#include <iostream>
using namespace std;

int test31() {
	int a = 10;
	//ָ�룺�������� *ָ�������
	int* p = &a; //��ָ��p��¼����a�ĵ�ַ
	cout << "a�ĵ�ַΪ�� " << &a << endl;
	cout << "ָ��pΪ�� " << p << endl;
	//ָ����ռ�ڴ�ռ�
	//��32λ����ϵͳ�£�ָ��վ4���ֽڴ�С��������������
	//��64λ����ϵͳ�£�ָ��վ8���ֽڴ�С��������������
	cout << "sizeof(int *)" << sizeof(int*) << endl;
	cout << "sizeof(float *)" << sizeof(float*) << endl;
	cout << "sizeof(double *)" << sizeof(double*) << endl;
	cout << "sizeof(char *)" << sizeof(char*) << endl;

	//��ָ�룺���ڸ�ָ��������г�ʼ���������Խ��з���
	int* p1 = NULL; 
	//0~255֮����ڴ�����ϵͳռ�õģ�Ҳ������ֱ�ӷ���
	//*p1 = 100; //ϵͳ�����

	//Ұָ�룺ָ�����ָ��Ƿ����ڴ�ռ�
	//�ڳ����У������������Ұָ��
	//int* p2 = (int *)0x1100;
	//cout << *p2 << endl; //�������쳣: ��ȡ����Ȩ�޳�ͻ��

	//��ָ���Ұָ�붼������������Ŀռ䣬��Ҫ����


	system("pause");

	return 0;
}