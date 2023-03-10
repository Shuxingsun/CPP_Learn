#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

/**
函数重载条件
1.同一作用域
2.函数名称相同
3.参数个数、类型、顺序不同
**/
void func()
{
	cout << "func 调用" << endl;
}

void func(int a)
{
	cout << "func(int a)调用" << endl;
}

void func(double a)
{
	cout << "func(double a)" << endl;
}

void func(int a, double b)
{
	cout << "func(int a, double b)" << endl;
}

void func(double a, int b)
{
	cout << "func(double a, int b)" << endl;
}

//返回值不可以作为函数重载的条件 
void test01()
{
	func(1, 3.12);
}

//函数重载 两个引用版本
void myFunc(int& a)  // int & a = 10
{
	cout << "myfunc(const int &a )" << endl;
}
void myFunc(const int& a) // const int &a = 10
{
	cout << "myFunc(const int &a)" << endl;
}


void test02()
{
	int a = 10;
	myFunc(a);
}

void func2(int a, int b = 10)
{

}
void func2(int a)
{

}
void test03()
{
	func(10);//出现二义性
}

int main()
{
	//test01();
	test02();
	
	system("pause");
	return EXIT_SUCCESS;


}