#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int atk = 1000;
void test01() {
	int atk = 2000;
	std::cout << "atk = " << atk << std::endl;

	std::cout << "È«¾Ö atk= " << ::atk << std::endl;
}

int main() {
	test01();
	system("pause");
	return EXIT_SUCCESS;


}