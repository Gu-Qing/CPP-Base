#include <iostream>
using namespace std;

void exchange(int *a, int *b) { //�β�����a��b��ָ��
	int temp = *a; //*a�ǽ����ã�ȡa��ֵ
	*a = *b;
	*b = temp;
}

int test34() {

	int a = 10, b = 20;
	cout << "Before Exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	//��ַ����
	exchange(&a, &b);
	cout << "After Exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	system("pause");

	return 0;
}