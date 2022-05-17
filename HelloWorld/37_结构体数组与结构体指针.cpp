#include <iostream>
#include <string>
using namespace std;

//结构体指针：利用操作符 -> 可以通过结构体指针访问结构体属性
struct stu {
	string name;
	int age;
};

int test37() {
	struct stu stuArray[3] = {
		{"张三", 18},
		{"李四", 19},
		{"王五", 20}
	};

	stuArray[2].name = "钱多多";
	stuArray[2].age = 18;

	for (int i = 0; i < 3; i++) {
		cout << "Name: " << stuArray[i].name << "\t"
			<< ", Age: " << stuArray[i].age << endl;
	}

	cout << "-------------------------------------------" << endl;
	
	struct stu s = { "里斯", 22 };
	//通过指针指向结构体变量
	struct stu *p = &s;
	//通过指针访问结构体变量中的数据
	cout << "Name: " << p->name << "\t"
		<< ", Age: " << p->age << endl;

	system("pause");

	return 0;
}