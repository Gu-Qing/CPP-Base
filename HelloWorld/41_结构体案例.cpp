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

//给老师和学生赋值的函数
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

	//随机数种子
	srand((unsigned int) time(NULL));

	//创建3位老师的数组
	struct Teacher tArray[3];

	//通过函数给3位老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");

	return 0;
}