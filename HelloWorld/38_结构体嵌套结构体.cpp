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
	t.tname = "����ʦ";
	t.stu.sname = "����";
	t.stu.sno = 111;

	teacher t1;
	t1.tno = 2;
	t1.tname = "����ʦ";
	t1.stu = { 222, "����" };

	cout << "Teacher : " << t.tname << ", Student: " << t.stu.sname  << endl
		<< "Teacher : " << t1.tname << ", Student: " << t1.stu.sname  << endl;

	system("pause");

	return 0;
}