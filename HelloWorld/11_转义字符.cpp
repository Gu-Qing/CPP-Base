#include <iostream>
using namespace std;

int test11() {
	//转义字符：用于表示一些不能显示出来的ASCII字符
	
	cout << "hello world\n"; //换行符 \n

	cout << "\\" << endl; //反斜杠 \\

	cout << "aaa\tbbb" << endl; //水平制表符 \t
	cout << "aaaaaaa\tbbb" << endl; //水平制表符 \t
	cout << "aaaaa\tbbbbbb" << endl; //水平制表符 \t
	cout << "a\tbbbbbb" << endl; //水平制表符 \t

	system("pause");

	return 0;
}