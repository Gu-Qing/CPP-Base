#include <iostream>
using namespace std;

struct Animal {
	string name;
	int num;
};
//ֵ����
void printAnimal(Animal animal) {
	animal.name = "dog";
	cout << "Animal's name: " << animal.name << endl;
	cout << "Animal's num: " << animal.num << endl;
}
//��ַ����
void printAnimal2(Animal *animal) {
	animal->name = "bird";
	cout << "Animal's name: " << animal->name << endl;
	cout << "Animal's num: " << animal->num << endl;
}

int test39() {
	Animal animal;
	animal.name = "cat";
	animal.num = 100;

	printAnimal(animal); //ֵ����
	cout << "Animal's name: " << animal.name << endl;
	cout << "Animal's num: " << animal.num << endl;
	printAnimal2(&animal); //��ַ����
	cout << "Animal's name: " << animal.name << endl;
	cout << "Animal's num: " << animal.num << endl;

	system("pause");

	return 0;
}