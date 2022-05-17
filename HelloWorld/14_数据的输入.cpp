#include <iostream>
#include <string>
using namespace std;

int tset14() {

	int a = 0;
	cout << "please input a int a : " << endl;
	cin >> a;
	cout << "a = " << a << endl;

	float f = 3.14f;
	cout << "please input float f : " << endl;
	cin >> f;
	cout << "f = " << f << endl;

	char ch = 'a';
	cout << "please input a char ch : " << endl;
	cin >> ch;
	cout << "ch = " << ch << endl;

	string str = "hello";
	cout << "please input a string srt : " << endl;
	cin >> str;
	cout << "str = " << str << endl;

	bool flag = true;
	cout << "please input a bool flag : " << endl;
	cin >> flag;
	cout << "flag = " << flag << endl;

	system("pause");

	return 0;
}