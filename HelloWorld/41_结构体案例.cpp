#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Student {
	string sname;
	int score;
};

struct Teacher {
	string tname;
	struct Student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[], int len) {
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArray[i].tname = "Teahcer_";
		tArray[i].tname += nameSeed[i];

		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].sname = "Student_";
			tArray[i].sArray[j].sname += nameSeed[j];

			int random = rand() % 61 + 40; //40 ~100
			tArray[i].sArray[j].score = random;
		}
		
	}
}

void printInfo(struct Teacher t[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "Teachers's name: " << t[i].tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tStudent's name: " << t[i].sArray[j].sname
				<< " Score: " << t[i].sArray[j].score << endl;
		}
	}
}

int main() {

	//���������
	srand((unsigned int) time(NULL));

	//����3λ��ʦ������
	struct Teacher tArray[3];

	//ͨ��������3λ��ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//��ӡ������ʦ��������ѧ����Ϣ
	printInfo(tArray, len);

	system("pause");

	return 0;
}