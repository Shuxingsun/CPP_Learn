#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include <string>

//异常的基类
class BaseException
{
public:
	virtual void printError() = 0;
};

//空指针异常
class NULLPointException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "空指针的异常" << endl;
	}
};

//越界异常
class OutOfRangeException :public BaseException
{
public:
	virtual void printError()
	{
		cout << "越界异常" << endl;
	}
};

void doWork()
{
	throw OutOfRangeException();
}

void test01()
{
	try
	{
		doWork();
	}
	catch (BaseException & e) //父类引用接受子类对象
	{
		e.printError();
	}
}

int main() {

	test01();

	system("pause");
	return EXIT_SUCCESS;
}