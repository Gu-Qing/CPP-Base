#include <iostream>
using namespace std;

int test23() {

	//break
	cout << "请选择副本难度：" << endl;
	cout << "1. 普通" << endl;
	cout << "2. 中等" << endl;
	cout << "3. 困难" << endl;

	int select = 0;
	cin >> select;

	switch (select) {
	case 1:
		cout << "普通" << endl;
		break;
	case 2:
		cout << "中等" << endl;
		break;
	default:
		cout << "困难" << endl;
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
			continue; //跳过本次循环中余下尚未执行的语句，执行下一次循环
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