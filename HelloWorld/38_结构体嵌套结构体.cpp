#include <iostream>
using namespace std;

struct student1 {
	int sno;
	string sname;
};

struct teacher {
	int tno;
	string tname;
	struct student1 stu;
};

int test38() {

	teacher t;
	t.tno = 1;
	t.tname = "周老师";
	t.stu.sname = "李四";
	t.stu.sno = 111;

	teacher t1;
	t1.tno = 2;
	t1.tname = "陈老师";
	t1.stu = { 222, "张三" };

	cout << "Teacher : " << t.tname << ", Student: " << t.stu.sname  << endl
		<< "Teacher : " << t1.tname << ", Student: " << t1.stu.sname  << endl;

	system("pause");

	return 0;
}