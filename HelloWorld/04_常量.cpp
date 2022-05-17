#include <iostream>
using namespace std;

//#define 宏常量：通常在文件上方定义。
#define N 10
//const修饰的变量：通常在变量定义前加关键字const，修饰该变量为常量，不可修改
const int n = 10;

int test04() {

	cout << "N = " << N << endl;

	const int m = 12;
	//m = 12; 
	cout << "m = " << m << endl;

	system("pause");

	return 0;
}