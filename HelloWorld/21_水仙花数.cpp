#include <iostream>
using namespace std;

int test21() {
	/*
	* ˮ�ɻ�����һ����λ����ÿ��λ�ϵ����ֵ�������֮�͵���������
	*/
	int num = 100;
	do {
		int a = 0, b = 0, c = 0; //��λ��ʮλ����λ
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}
	} while (num++ < 999);

	return 0;
}