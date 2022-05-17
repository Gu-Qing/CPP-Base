#include <iostream>
#include <string>
using namespace std;

struct Cat {
	string color;
	int age;
};

//将形参转为指针，可以减少内存空间。值传递是复制，地址传递是传地址
//const 可以保证函数中结构体不被修改
void printCat(const struct Cat *const cat) {
	//cat->age = 5; //const Cat *cat
	//struct Cat c2;
	//cat = &c2; //为保证所指向的地址也不被修改，应写为const Cat *const cat
	cout << "Cat's color: " << cat->color << ", age: " << cat->age << endl;
}

int test40() {
	struct Cat cat = { "white", 3 };

	printCat(&cat);

	system("pause");

	return 0;
}