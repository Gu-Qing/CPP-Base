#include <iostream>
using namespace std;

int test21() {
	/*
	* 水仙花数：一个三位数，每个位上的数字的三次幂之和等于他本身
	*/
	int num = 100;
	do {
		int a = 0, b = 0, c = 0; //个位，十位，百位
		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if (a * a * a + b * b * b + c * c * c == num) {
			cout << num << endl;
		}
	} while (num++ < 999);

	return 0;
}