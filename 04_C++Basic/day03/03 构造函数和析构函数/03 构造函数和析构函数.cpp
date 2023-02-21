#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Person
{
public: //析构构造函数必须生命在全局作用域
	/*
	//构造函数
    //没有返回值  不用写void
    //函数名 与 类名相同
    //可以有参数  ，可以发生重载
    //构造函数 由编译器自动调用一次 无须手动调用
	*/
	Person()
	{
		cout << "Person 的构造函数调用 " << endl;
	}
	/*
	//构造函数
    //没有返回值  不用写void
    //函数名 与 类名相同
    //可以有参数  ，可以发生重载
    //构造函数 由编译器自动调用一次 无须手动调用
	*/
	~Person() {
		cout << "Person 的析构函数调用 " << endl;
	}
};

void test01()
{
	Person p;
}
int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}
