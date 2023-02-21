#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include "test.h"

//1. 第一种方法 告诉编译器 函数用C语言方式 链接
//extern "C" void show();

void test01()
{
	show();
}
int main() {
	test01();

	system("pause");
	return EXIT_SUCCESS;
}