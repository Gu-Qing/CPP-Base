#include <iostream>
#include <string>
using namespace std;

//�ṹ��ָ�룺���ò����� -> ����ͨ���ṹ��ָ����ʽṹ������
struct stu {
	string name;
	int age;
};

int test37() {
	struct stu stuArray[3] = {
		{"����", 18},
		{"����", 19},
		{"����", 20}
	};

	stuArray[2].name = "Ǯ���";
	stuArray[2].age = 18;

	for (int i = 0; i < 3; i++) {
		cout << "Name: " << stuArray[i].name << "\t"
			<< ", Age: " << stuArray[i].age << endl;
	}

	cout << "-------------------------------------------" << endl;
	
	struct stu s = { "��˹", 22 };
	//ͨ��ָ��ָ��ṹ�����
	struct stu *p = &s;
	//ͨ��ָ����ʽṹ������е�����
	cout << "Name: " << p->name << "\t"
		<< ", Age: " << p->age << endl;

	system("pause");

	return 0;
}