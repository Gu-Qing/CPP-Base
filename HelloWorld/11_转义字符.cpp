#include <iostream>
using namespace std;

int test11() {
	//ת���ַ������ڱ�ʾһЩ������ʾ������ASCII�ַ�
	
	cout << "hello world\n"; //���з� \n

	cout << "\\" << endl; //��б�� \\

	cout << "aaa\tbbb" << endl; //ˮƽ�Ʊ�� \t
	cout << "aaaaaaa\tbbb" << endl; //ˮƽ�Ʊ�� \t
	cout << "aaaaa\tbbbbbb" << endl; //ˮƽ�Ʊ�� \t
	cout << "a\tbbbbbb" << endl; //ˮƽ�Ʊ�� \t

	system("pause");

	return 0;
}