#include <iostream>
using namespace std;

int test32() {
	/*
	* 看const右侧跟着的是指针*还是常量p
	* 是指针就是常量指针 const int *p
	* 是常量就是指针常量 int *const p
	*/

	int a = 10; 
	int b = 20;
	//1.const修饰指针
	const int* p = &a; //指针指向的值不可以改，指针的指向可以改
	//*p = 20;
	p = &b;

	//2.const修饰常量
	int* const p2 = &a; //指针指向的值可以改，指针的指向不可以改
	*p2 = 20;
	//p2 = &b;


	//3.const修饰指针和常量
	const int* const p3 = &a; //指针的指向和值都不可以改
	//*p3 = 30;
	//p3 = &b;

	system("pause");

	return 0;
}