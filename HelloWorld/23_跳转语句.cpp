#include <iostream>
using namespace std;

int test23() {

	//break
	cout << "��ѡ�񸱱��Ѷȣ�" << endl;
	cout << "1. ��ͨ" << endl;
	cout << "2. �е�" << endl;
	cout << "3. ����" << endl;

	int select = 0;
	cin >> select;

	switch (select) {
	case 1:
		cout << "��ͨ" << endl;
		break;
	case 2:
		cout << "�е�" << endl;
		break;
	default:
		cout << "����" << endl;
		break;
	}
	cout << "-----------------------------" << endl;
	for (int i = 0; i < 10; i++) {
		if (i == 5) break;
		cout << "i = " << i << endl;
	}
	cout << "-----------------------------" << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 5) break;
			cout << "*" << " ";
		}
		cout << endl;
	}

	cout << "-----------------------------" << endl;

	//continue
	for (int i = 0; i < 50; i++) {
		if (i % 2) {
			continue; //��������ѭ����������δִ�е���䣬ִ����һ��ѭ��
		}
		cout << i << endl;
	}

	cout << "-----------------------------" << endl;
	
	//goto
	cout << "The first" << endl;
	cout << "The second" << endl;
	goto FLAG;
	cout << "The third" << endl;
	cout << "The fourth" << endl;
	FLAG:
	cout << "The fifth" << endl;

	system("pause");

	return 0;
}