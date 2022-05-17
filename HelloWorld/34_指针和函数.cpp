#include <iostream>
using namespace std;

void exchange(int *a, int *b) { //形参声明a和b是指针
	int temp = *a; //*a是解引用，取a的值
	*a = *b;
	*b = temp;
}

int test34() {

	int a = 10, b = 20;
	cout << "Before Exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	//地址传递
	exchange(&a, &b);
	cout << "After Exchange: " << endl;
	cout << "a = " << a << ", b = " << b << endl;
	
	system("pause");

	return 0;
}