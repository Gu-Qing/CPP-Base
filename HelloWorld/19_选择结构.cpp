#include <iostream>
using namespace std;

int test19() {
	/*
	* �������̽ṹ��˳��ṹ��ѡ��ṹ��ѭ���ṹ
	*/

	//ѡ��ṹ
	int score;
	cout << "Please enter a score: " << endl;
	cin >> score;
	cout << "Your score is : " << score << endl;

	if (score > 600) {
		cout << "You are the best!" << endl;
	}
	else {
		cout << "Come on!" << endl;
	}

	cout << "-----------------------------------" << endl;

	//������if���
	if (score > 500) {
		cout << "If : " << score << endl;
	}
	else if (score > 400) {
		cout << "Else if1 : " << score << endl;
	}
	else if (score > 300) {
		cout << "Else if2 :" << score << endl;
	}
	else {
		cout << "Else : " << score << endl;
	}

	cout << "------------------------------------" << endl;
	//Ƕ��if���
	if (score > 600) {
		if (score > 700) {
			cout << "BeiJing College" << endl;
		}
		else if (score > 650) {
			cout << "QingHua College" << endl;
		}
		else {
			cout << "985 211 College" << endl;
		}
	}
	else {
		cout << "Normal College" << endl;
	}

	cout << "---------------------------------------" << endl;
	int a = 10;
	int b = 0; 
	int c = 50;
	//��Ŀ�����
	cout << "max(a, b, c) = " << (a > b ? (a > c ? a : c) : (b > c ? b : c)) << endl;

	cout << "---------------------------------------" << endl;
	//switch ���
	int num;
	cout << "Please enter a num : " << endl;
	cin >> num;
	switch (num) { //num ֻ��ȡ���ͻ����ַ��͡��ṹ������ִ��Ч�ʸߡ�
	case 10:
	case 9:
		cout << "The Best!" << endl;
		break;
	case 8: 
		cout<< "Good!" << endl;
		break;
	case 7:
	case 6:
		cout << "Normal!" << endl;
		break;
	default:
		cout << "Bad!" << endl;
		break;
	}

	system("pause");

	return 0;
}