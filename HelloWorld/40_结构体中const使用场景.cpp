#include <iostream>
#include <string>
using namespace std;

struct Cat {
	string color;
	int age;
};

//���β�תΪָ�룬���Լ����ڴ�ռ䡣ֵ�����Ǹ��ƣ���ַ�����Ǵ���ַ
//const ���Ա�֤�����нṹ�岻���޸�
void printCat(const struct Cat *const cat) {
	//cat->age = 5; //const Cat *cat
	//struct Cat c2;
	//cat = &c2; //Ϊ��֤��ָ��ĵ�ַҲ�����޸ģ�ӦдΪconst Cat *const cat
	cout << "Cat's color: " << cat->color << ", age: " << cat->age << endl;
}

int test40() {
	struct Cat cat = { "white", 3 };

	printCat(&cat);

	system("pause");

	return 0;
}