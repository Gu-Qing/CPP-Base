#include <iostream>
#include <string>
using namespace std;
/*
* 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
* struct 结构体名称 { 结构体成员列表 }
* 结构体变量利用 . 访问属性
*/

struct student { //定义结构体的时候struct不可以省略
	string name;
	int age;
	float score;
} s3;

int test36() {

	//创建结构体变量的时候可以省略struct
	student s1;
	s1.name = "张三";
	s1.age = 19;
	s1.score = 100;
	cout << s1.name << ": age is " << s1.age << ", score is " << s1.score << endl;

	student s2 = { "里斯", 18, 98.9f };
	cout << s2.name << ": age is " << s2.age << ", score is " << s2.score << endl;

	s3.name = "王五";
	s3.age = 20;
	s3.score = 87.5f;
	cout << s3.name << ": age is " << s3.age << ", score is " << s3.score << endl;
	
	
	system("pause");

	return 0;
}