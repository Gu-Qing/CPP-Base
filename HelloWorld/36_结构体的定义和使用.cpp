#include <iostream>
#include <string>
using namespace std;
/*
* �ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������
* struct �ṹ������ { �ṹ���Ա�б� }
* �ṹ��������� . ��������
*/

struct student { //����ṹ���ʱ��struct������ʡ��
	string name;
	int age;
	float score;
} s3;

int test36() {

	//�����ṹ�������ʱ�����ʡ��struct
	student s1;
	s1.name = "����";
	s1.age = 19;
	s1.score = 100;
	cout << s1.name << ": age is " << s1.age << ", score is " << s1.score << endl;

	student s2 = { "��˹", 18, 98.9f };
	cout << s2.name << ": age is " << s2.age << ", score is " << s2.score << endl;

	s3.name = "����";
	s3.age = 20;
	s3.score = 87.5f;
	cout << s3.name << ": age is " << s3.age << ", score is " << s3.score << endl;
	
	
	system("pause");

	return 0;
}