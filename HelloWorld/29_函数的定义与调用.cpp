#include <iostream>
using namespace std;

/*
* �����Ķ��壺
* ����ֵ���� ������(�����б�){��������� return���ʽ}
*/
int add(int num1, int num2) { //�β�
	int sum = num1 + num2;
	return sum;
}

void swap(int a, int b) { 
	int temp = a;
	a = b;
	b = temp;
	return ;
}

//����������
int max(int a, int b);

int test29() {

	int a, b;
	cout << "Please enter a and b:" << endl;
	cin >> a >> b;
	//�����ĵ��á�ʵ�Ρ�
	int sum = add(a, b); 
	cout << "a + b = " << sum << endl;

	//ֵ����ʱ���������βη����ı䣬����Ӱ��ʵ��
	cout << "Before exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	swap(a, b);
	cout << "After exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	system("pause");

	return 0;
}
 //�����Ķ���
int max(int a, int b) {
	return a > b ? a : b;
}